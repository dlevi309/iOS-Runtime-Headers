/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBAppLayout;

@interface SBSwitcherModelRemovalRequestAction : NSObject {

	long long _actionType;
	SBAppLayout* _replacementAppLayout;

}

@property (nonatomic,readonly) long long actionType;                                 //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) SBAppLayout * replacementAppLayout;              //@synthesize replacementAppLayout=_replacementAppLayout - In the implementation block
+(id)defaultRemovalPolicyAction;
+(id)replacementActionWithAppLayout:(id)arg1 ;
-(long long)actionType;
-(SBAppLayout *)replacementAppLayout;
-(id)_initWithActionType:(long long)arg1 ;
@end

