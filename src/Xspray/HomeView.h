//
//  HomeView.h
//  Xspray
//
//  Created by Sébastien Métrot on 6/30/13.
//
//

#pragma once

class HomeView : public nuiLayout
{
public:
  HomeView();
  virtual ~HomeView();

  virtual void Built();

  nuiSignal1<const nglPath&> Launch;
private:
  nuiEventSink<HomeView> mEventSink;
  nuiSlotsSink mSlotSink;

  nuiButton* mpLaunchApplication;
  void OnLaunch(const nuiEvent& rEvent);
};