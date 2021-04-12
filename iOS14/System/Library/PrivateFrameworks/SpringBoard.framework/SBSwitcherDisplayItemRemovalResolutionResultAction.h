/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBAppLayout;

@interface SBSwitcherDisplayItemRemovalResolutionResultAction : NSObject {

	long long _actionType;
	SBAppLayout* _appLayout;
	SBAppLayout* _replacementAppLayout;

}

@property (nonatomic,readonly) long long actionType;                                 //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) SBAppLayout * appLayout;                         //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,copy,readonly) SBAppLayout * replacementAppLayout;              //@synthesize replacementAppLayout=_replacementAppLayout - In the implementation block
+(id)replacementActionWithAppLayout:(id)arg1 replacementAppLayout:(id)arg2 ;
+(id)defaultRemovalPolicyActionWithAppLayout:(id)arg1 ;
-(SBAppLayout *)appLayout;
-(long long)actionType;
-(SBAppLayout *)replacementAppLayout;
-(id)_initWithAppLayout:(id)arg1 actionType:(long long)arg2 ;
@end

