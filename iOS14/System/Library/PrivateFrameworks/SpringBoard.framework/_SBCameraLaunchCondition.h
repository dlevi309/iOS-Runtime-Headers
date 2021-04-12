/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

