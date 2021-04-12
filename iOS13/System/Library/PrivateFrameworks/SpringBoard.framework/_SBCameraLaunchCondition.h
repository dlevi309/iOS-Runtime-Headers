/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface _SBCameraLaunchCondition : NSObject {

	BOOL _met;

}

@property (assign,getter=isMet,nonatomic) BOOL met;              //@synthesize met=_met - In the implementation block
+(id)conditionWithConditions:(id)arg1 ;
+(id)conditionWithValue:(BOOL)arg1 ;
-(BOOL)isMet;
-(void)setMet:(BOOL)arg1 ;
@end

