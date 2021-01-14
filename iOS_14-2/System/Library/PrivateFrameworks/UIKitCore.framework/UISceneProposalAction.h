/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class NSString, BSAction;

@interface UISceneProposalAction : BSAction

@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
@property (nonatomic,copy,readonly) BSAction * action; 
-(NSString *)sceneIdentifier;
-(long long)UIActionType;
-(BSAction *)action;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithSceneIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

