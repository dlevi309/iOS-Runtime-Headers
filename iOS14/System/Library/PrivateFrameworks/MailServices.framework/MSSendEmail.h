/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <MailServices/MSMailDefaultService.h>

@interface MSSendEmail : MSMailDefaultService
+(id)sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)sendEmail:(id)arg1 playSound:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)sendEmail:(id)arg1 playSound:(BOOL)arg2 timeout:(double)arg3 error:(id*)arg4 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_sendEmail:(id)arg1 playSound:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

