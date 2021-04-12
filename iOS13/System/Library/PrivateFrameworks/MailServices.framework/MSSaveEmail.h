/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <MailServices/MSMailDefaultService.h>

@interface MSSaveEmail : MSMailDefaultService
+(void)securityScopeForPlaceholderURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)placeholderAttachmentForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
+(void)deletePlaceholderAttachmentForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
+(void)saveEmail:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_saveEmail:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

