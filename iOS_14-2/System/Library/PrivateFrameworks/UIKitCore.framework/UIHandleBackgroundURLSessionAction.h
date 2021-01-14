/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class NSString;

@interface UIHandleBackgroundURLSessionAction : BSAction

@property (nonatomic,copy,readonly) NSString * sessionIdentifier; 
-(id)initWithSessionIdentifier:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(long long)UIActionType;
-(NSString *)sessionIdentifier;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithSessionIdentifier:(id)arg1 ;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

