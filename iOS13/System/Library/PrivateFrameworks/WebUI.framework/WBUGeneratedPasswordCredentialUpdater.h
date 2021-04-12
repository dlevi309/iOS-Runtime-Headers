/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface WBUGeneratedPasswordCredentialUpdater : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _urlsScheduledForUpdating;
	NSMutableDictionary* _urlsToUpdateRequests;

}
+(id)sharedUpdater;
-(id)init;
-(void)_performRequest:(id)arg1 ;
-(void)updateCredentialWithNewUsername:(id)arg1 newGeneratedPassword:(id)arg2 lastGeneratedPassword:(id)arg3 credentialURL:(id)arg4 protectionSpace:(id)arg5 shouldSaveNewCredential:(BOOL)arg6 ;
@end

