/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFCondition.h>

@class HMPresenceEvent;

@interface HFPresenceCondition : HFCondition {

	HMPresenceEvent* _presenceEvent;

}

@property (nonatomic,retain) HMPresenceEvent * presenceEvent;              //@synthesize presenceEvent=_presenceEvent - In the implementation block
-(id)initWithPredicate:(id)arg1 ;
-(id)initWithPresenceEvent:(id)arg1 ;
-(HMPresenceEvent *)presenceEvent;
-(void)setPresenceEvent:(HMPresenceEvent *)arg1 ;
@end

