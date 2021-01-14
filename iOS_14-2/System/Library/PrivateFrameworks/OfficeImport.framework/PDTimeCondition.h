/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTarget:(id)arg1 ;
-(id)init;
-(void)setDelay:(int)arg1 ;
-(int)triggerEvent;
-(void)setTriggerEvent:(int)arg1 ;
-(id)description;
-(BOOL)hasDelay;
-(int)delay;
-(id)target;
-(BOOL)hasTriggerEvent;
-(int)writeDelay;
@end

