/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/DEDFinisher.h>
#import <libobjc.A.dylib/DEDSeedingClientDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@protocol OS_dispatch_source, OS_os_log, OS_os_transaction;
@class NSObject, DEDBugSessionConfiguration, NSMutableSet, DEDBugSession, DEDSeedingClient, NSMutableDictionary, NSString;

@interface DEDSeedingFinisher : NSObject <DEDFinisher, DEDSeedingClientDelegate, NSSecureCoding, DEDSecureArchiving> {

	NSObject*<OS_dispatch_source> _timerSource;
	DEDBugSessionConfiguration* _config;
	NSMutableSet* _uploads;
	unsigned long long _totalUploadSize;
	NSObject*<OS_os_log> _log;
	DEDBugSession* _session;
	NSObject*<OS_os_transaction> _transaction;
	DEDSeedingClient* _client;
	NSMutableDictionary* _promises;

}

@property (retain) DEDBugSessionConfiguration * config;                   //@synthesize config=_config - In the implementation block
@property (retain) NSMutableSet * uploads;                                //@synthesize uploads=_uploads - In the implementation block
@property (assign) unsigned long long totalUploadSize;                    //@synthesize totalUploadSize=_totalUploadSize - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                              //@synthesize log=_log - In the implementation block
@property (__weak) DEDBugSession * session;                               //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (retain) DEDSeedingClient * client;                             //@synthesize client=_client - In the implementation block
@property (retain) NSMutableDictionary * promises;                        //@synthesize promises=_promises - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DEDBugSessionConfiguration *)config;
-(DEDSeedingClient *)client;
-(void)setClient:(DEDSeedingClient *)arg1 ;
-(void)save;
-(void)setConfig:(DEDBugSessionConfiguration *)arg1 ;
-(void)cleanup;
-(DEDBugSession *)session;
-(void)setSession:(DEDBugSession *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setUploads:(NSMutableSet *)arg1 ;
-(NSMutableSet *)uploads;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2 ;
-(void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1 ;
-(void)didCancelCollectionOnExtension:(id)arg1 ;
-(void)didCollectAttachmentGroup:(id)arg1 ;
-(void)didAdoptAttachmentGroup:(id)arg1 ;
-(id)attachmentHandler;
-(id)prepareSessionDirectoryForSubmission:(id)arg1 ;
-(void)setTotalUploadSize:(unsigned long long)arg1 ;
-(NSMutableDictionary *)promises;
-(unsigned long long)totalUploadSize;
-(void)startProgressNotifier;
-(void)setPromises:(NSMutableDictionary *)arg1 ;
-(id)uploadItemForTask:(id)arg1 ;
-(void)updateSessionUploadProgress;
-(BOOL)uploadsAreComplete;
-(id)prepareUpload:(id)arg1 forSubmissionWithSession:(id)arg2 metadata:(id)arg3 ;
-(id)archiveItemsInDirectory:(id)arg1 ;
-(void)uploadTask:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)uploadTask:(id)arg1 didSendBytes:(long long)arg2 ;
@end

