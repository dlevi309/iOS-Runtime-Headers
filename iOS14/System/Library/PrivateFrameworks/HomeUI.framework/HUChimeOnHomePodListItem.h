/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HMHome;

@interface HUChimeOnHomePodListItem : HFItem {

	BOOL _accessoryIsCameraWithDoorbell;
	HMHome* _home;

}

@property (assign,nonatomic) BOOL accessoryIsCameraWithDoorbell;              //@synthesize accessoryIsCameraWithDoorbell=_accessoryIsCameraWithDoorbell - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                 //@synthesize home=_home - In the implementation block
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(HMHome *)home;
-(BOOL)accessoryIsCameraWithDoorbell;
-(void)setAccessoryIsCameraWithDoorbell:(BOOL)arg1 ;
@end

