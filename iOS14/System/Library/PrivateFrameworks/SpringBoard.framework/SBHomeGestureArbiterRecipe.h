/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class SBHomeGestureParticipant, NSString;

@interface SBHomeGestureArbiterRecipe : NSObject <SBTestRecipe> {

	SBHomeGestureParticipant* _participant;

}

@property (nonatomic,retain) SBHomeGestureParticipant * participant;              //@synthesize participant=_participant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(void)setParticipant:(SBHomeGestureParticipant *)arg1 ;
-(SBHomeGestureParticipant *)participant;
-(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
@end

