/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class NSURL, BSProcessHandle;

@interface UIOpenURLAction : BSAction

@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) BSProcessHandle * workspaceOriginatingProcess; 
-(id)initWithURL:(id)arg1 ;
-(long long)UIActionType;
-(BSProcessHandle *)workspaceOriginatingProcess;
-(NSURL *)url;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 workspaceOriginatingProcess:(id)arg2 ;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

