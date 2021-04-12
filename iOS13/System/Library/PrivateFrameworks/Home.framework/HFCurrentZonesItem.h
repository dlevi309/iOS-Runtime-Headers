/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>

@class HMRoom;

@interface HFCurrentZonesItem : HFItem {

	HMRoom* _room;

}

@property (nonatomic,readonly) HMRoom * room;              //@synthesize room=_room - In the implementation block
-(id)init;
-(HMRoom *)room;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithRoom:(id)arg1 ;
@end

