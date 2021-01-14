/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <BaseBoard/BSAction.h>

@class NSString;

@interface SBSUIInCallRequestPresentationModeAction : BSAction

@property (nonatomic,copy,readonly) NSString * analyticsSource; 
@property (nonatomic,readonly) long long requestedPresentationMode; 
@property (getter=isUserInitiated,nonatomic,readonly) BOOL userInitiated; 
-(id)initWithRequestedPresentationMode:(long long)arg1 isUserInitiated:(BOOL)arg2 analyticsSource:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)sendCompletionResponseWithSuccess:(BOOL)arg1 ;
-(long long)requestedPresentationMode;
-(BOOL)isUserInitiated;
-(NSString *)analyticsSource;
@end

