/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/UNSNotificationRepositoryObserver.h>
#import <libobjc.A.dylib/UNSPendingNotificationRepositoryObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, UNSAttachmentsRepository, UNSNotificationRepository, UNSNotificationSchedulingService, UNSPendingNotificationRepository, NSString;

@interface UNSAttachmentsService : NSObject <UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	UNSAttachmentsRepository* _attachmentsRepository;
	UNSNotificationRepository* _notificationRepository;
	UNSNotificationSchedulingService* _notificationSchedulingService;
	UNSPendingNotificationRepository* _pendingNotificationRepository;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_stagingDirectory;
+(id)_notificationIdentifiersForNotificationRecords:(id)arg1 ;
+(id)_attachmentURLsRemovedByReplaceUpdate:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_ensureIntegrityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_repositoryDidPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_temporaryAttachmentFileURL;
-(void)pendingNotificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(id)_queue_resolvedURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5 ;
-(void)_queue_deleteAttachmentDataForNotificationRecord:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_beginObservingNotificationChanges;
-(id)initWithAttachmentsRepository:(id)arg1 notificationRepository:(id)arg2 notificationSchedulingService:(id)arg3 pendingNotificationRepository:(id)arg4 ;
-(id)resolveAttachmentsSkippingErrorsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 ;
-(id)_queue_resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 continueOnFailure:(BOOL)arg4 error:(id*)arg5 ;
-(void)_queue_deleteAttachmentDataForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)_queue_resolvedFileURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5 ;
-(void)_queue_applicationDidUninstall:(id)arg1 ;
-(void)_notificationIdentifiersForBundleIdentifier:(id)arg1 replyOnQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)ensureIntegrityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(id*)arg4 ;
-(id)_queue_validatedRepositoryURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5 ;
@end

