/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/ASDNotificationCenterDialogObserver.h>

@class NSString;

@interface VUIASDDialogObserver : NSObject <ASDNotificationCenterDialogObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startListening;
-(void)stopListening;
-(void)handleAuthenticateRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

