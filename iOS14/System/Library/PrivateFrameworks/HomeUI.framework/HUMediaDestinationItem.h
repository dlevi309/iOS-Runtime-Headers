/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@protocol HMMediaDestination;
@class HUHomeTheaterAudioItemModule;

@interface HUMediaDestinationItem : HFItem {

	HUHomeTheaterAudioItemModule* _homeTheaterAudioItemModule;
	id<HMMediaDestination> _thisDestination;

}

@property (readonly) HUHomeTheaterAudioItemModule * homeTheaterAudioItemModule;              //@synthesize homeTheaterAudioItemModule=_homeTheaterAudioItemModule - In the implementation block
@property (readonly) id<HMMediaDestination> thisDestination;                                 //@synthesize thisDestination=_thisDestination - In the implementation block
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithDestination:(id)arg1 withModule:(id)arg2 ;
-(HUHomeTheaterAudioItemModule *)homeTheaterAudioItemModule;
-(id<HMMediaDestination>)thisDestination;
@end

