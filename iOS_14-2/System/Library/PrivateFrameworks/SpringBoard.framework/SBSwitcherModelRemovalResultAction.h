/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBAppLayout;

@interface SBSwitcherModelRemovalResultAction : NSObject {

	/*^block*/id _modelMutationBlock;
	long long _actionType;
	SBAppLayout* _replacementAppLayout;

}

@property (nonatomic,readonly) long long actionType;                                 //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) SBAppLayout * replacementAppLayout;              //@synthesize replacementAppLayout=_replacementAppLayout - In the implementation block
+(id)replacementActionWithAppLayout:(id)arg1 mutationBlock:(/*^block*/id)arg2 ;
+(id)hideActionWithMutationBlock:(/*^block*/id)arg1 ;
+(id)removeActionWithMutationBlock:(/*^block*/id)arg1 ;
-(long long)actionType;
-(void)dealloc;
-(void)executeModelMutation;
-(SBAppLayout *)replacementAppLayout;
-(id)_initWithActionType:(long long)arg1 modelMutationBlock:(/*^block*/id)arg2 ;
@end

