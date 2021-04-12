/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class NSString, BSAction;

@interface UISceneProposalAction : BSAction

@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
@property (nonatomic,copy,readonly) BSAction * action; 
-(BSAction *)action;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)UIActionType;
-(NSString *)sceneIdentifier;
-(id)initWithSceneIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

