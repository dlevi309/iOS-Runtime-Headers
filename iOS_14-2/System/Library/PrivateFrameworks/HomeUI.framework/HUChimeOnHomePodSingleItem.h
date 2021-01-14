/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@protocol HFHomeKitObject;
@class HMHome;

@interface HUChimeOnHomePodSingleItem : HFItem {

	BOOL _accessoryIsCameraWithDoorbell;
	HMHome* _home;
	id<HFHomeKitObject> _homeKitObject;

}

@property (nonatomic,retain) id<HFHomeKitObject> homeKitObject;               //@synthesize homeKitObject=_homeKitObject - In the implementation block
@property (assign,nonatomic) BOOL accessoryIsCameraWithDoorbell;              //@synthesize accessoryIsCameraWithDoorbell=_accessoryIsCameraWithDoorbell - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                 //@synthesize home=_home - In the implementation block
-(id)init;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setHomeKitObject:(id<HFHomeKitObject>)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 homeKitObject:(id)arg2 ;
-(BOOL)accessoryIsCameraWithDoorbell;
-(void)setAccessoryIsCameraWithDoorbell:(BOOL)arg1 ;
@end

