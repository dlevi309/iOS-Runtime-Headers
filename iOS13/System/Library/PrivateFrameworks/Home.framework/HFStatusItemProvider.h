/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFStaticItemProvider.h>

@class HMHome, HMRoom;

@interface HFStatusItemProvider : HFStaticItemProvider {

	HMHome* _home;
	HMRoom* _room;

}

@property (nonatomic,readonly) HMHome * home;              //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMRoom * room;              //@synthesize room=_room - In the implementation block
+(id)_statusItemClasses;
+(BOOL)hasStatusItemForServiceType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)initWithItems:(id)arg1 ;
-(HMRoom *)room;
-(id)initWithHome:(id)arg1 room:(id)arg2 ;
@end

