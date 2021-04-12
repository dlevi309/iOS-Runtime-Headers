/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {

	BOOL mHasDelay;
	int mDelay;
	BOOL mHasTriggerEvent;
	int mTriggerEvent;
	PDAnimationTarget* mTarget;

}
-(id)init;
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(int)delay;
-(void)setDelay:(int)arg1 ;
-(BOOL)hasDelay;
-(int)triggerEvent;
-(void)setTriggerEvent:(int)arg1 ;
-(BOOL)hasTriggerEvent;
-(int)writeDelay;
@end

