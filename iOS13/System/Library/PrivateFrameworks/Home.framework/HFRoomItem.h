/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HMRoom, HMHome, NSString;

@interface HFRoomItem : HFItem <HFHomeKitItemProtocol> {

	HMRoom* _room;
	HMHome* _home;

}

@property (nonatomic,readonly) HMRoom * room;                                  //@synthesize room=_room - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)init;
-(NSString *)description;
-(HMHome *)home;
-(HMRoom *)room;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHome:(id)arg1 room:(id)arg2 ;
-(id)togglePowerState;
@end

