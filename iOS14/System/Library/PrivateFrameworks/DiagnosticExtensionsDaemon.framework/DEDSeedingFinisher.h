/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/DEDFinisherState.h>
#import <libobjc.A.dylib/DEDFinisher.h>
#import <libobjc.A.dylib/DEDSeedingClientDelegate.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_os_log, OS_os_transaction;
@class DEDBugSessionConfiguration, NSMutableSet, NSObject, DEDBugSession, DEDSeedingClient, NSMutableDictionary, NSString;

@interface DEDSeedingFinisher : NSObject <DEDFinisherState, DEDFinisher, DEDSeedingClientDelegate, DEDSecureArchiving, NSSecureCoding> {

	BOOL _isPreparing;
	int _uploadProgressCounter;
	DEDBugSessionConfiguration* _config;
	NSMutableSet* _uploads;
	long long _totalUploadSize;
	long long _lastUploadPercentageReported;
	long long _bytesUploadedFromAllFiles;
	NSObject*<OS_os_log> _log;
	DEDBugSession* _session;
	NSObject*<OS_os_transaction> _transaction;
	DEDSeedingClient* _client;
	NSMutableDictionary* _promises;

}

@property (retain) DEDBugSessionConfiguration * config;                   //@synthesize config=_config - In the implementation block
@property (retain) NSMutableSet * uploads;                                //@synthesize uploads=_uploads - In the implementation block
@property (assign) long long totalUploadSize;                             //@synthesize totalUploadSize=_totalUploadSize - In the implementation block
@property (assign) long long lastUploadPercentageReported;                //@synthesize lastUploadPercentageReported=_lastUploadPercentageReported - In the implementation block
@property (assign) long long bytesUploadedFromAllFiles;                   //@synthesize bytesUploadedFromAllFiles=_bytesUploadedFromAllFiles - In the implementation block
@property (assign,nonatomic) int uploadProgressCounter;                   //@synthesize uploadProgressCounter=_uploadProgressCounter - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                              //@synthesize log=_log - In the implementation block
@property (__weak) DEDBugSession * session;                               //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign) BOOL isPreparing;                                      //@synthesize isPreparing=_isPreparing - In the implementation block
@property (retain) DEDSeedingClient * client;                             //@synthesize client=_client - In the implementation block
@property (retain) NSMutableDictionary * promises;                        //@synthesize promises=_promises - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(DEDBugSessionConfiguration *)config;
-(DEDSeedingClient *)client;
-(void)setClient:(DEDSeedingClient *)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(BOOL)isUploading;
-(NSObject*<OS_os_log>)log;
-(void)save;
-(NSObject*<OS_os_transaction>)transaction;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(DEDBugSession *)session;
-(void)setSession:(DEDBugSession *)arg1 ;
-(void)cleanup;
-(NSMutableSet *)uploads;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldReportProgress;
-(void)setConfig:(DEDBugSessionConfiguration *)arg1 ;
-(NSMutableDictionary *)promises;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2 ;
-(void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1 ;
-(void)didCancelCollectionOnExtension:(id)arg1 ;
-(void)didCollectAttachmentGroup:(id)arg1 ;
-(void)didAdoptAttachmentGroup:(id)arg1 ;
-(long long)totalUploadSize;
-(long long)bytesUploadedFromAllFiles;
-(BOOL)isPreparing;
-(id)prepareSessionDirectoryForSubmission:(id)arg1 ;
-(void)setTotalUploadSize:(long long)arg1 ;
-(id)uploadItemForTask:(id)arg1 ;
-(void)updateUploadProgressOnSessionIfNeeded;
-(BOOL)uploadsAreComplete;
-(void)setPromises:(NSMutableDictionary *)arg1 ;
-(void)setBytesUploadedFromAllFiles:(long long)arg1 ;
-(int)uploadProgressCounter;
-(void)setUploadProgressCounter:(int)arg1 ;
-(long long)lastUploadPercentageReported;
-(void)setLastUploadPercentageReported:(long long)arg1 ;
-(void)setIsPreparing:(BOOL)arg1 ;
-(id)attachmentHandler;
-(id)prepareUpload:(id)arg1 forSubmissionWithSession:(id)arg2 metadata:(id)arg3 ;
-(id)archiveItemsInDirectory:(id)arg1 ;
-(BOOL)isCompressing;
-(id)additionalStateInfo;
-(void)uploadTask:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)uploadTask:(id)arg1 didSendBytes:(long long)arg2 totalBytesExpectedToSend:(long long)arg3 ;
-(BOOL)uploadFinished;
-(void)setUploads:(NSMutableSet *)arg1 ;
@end

