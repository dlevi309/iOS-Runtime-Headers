/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDiagnosticExtensionCore.framework/HealthDiagnosticExtensionCore
*/

#import <DiagnosticExtensions/DEExtensionProvider.h>
#import <libobjc.A.dylib/HDDiagnosticOperationDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSMutableString;

@interface HDDiagnosticExtension : DEExtensionProvider <HDDiagnosticOperationDelegate> {

	double _captureStartTime;
	int _contentProtectionNotifyToken;
	NSObject*<OS_dispatch_queue> _logQueue;
	BOOL _allowsSensitiveAttachments;
	NSURL* _temporaryDirectoryURL;
	NSMutableString* _collectionLog;

}

@property (nonatomic,readonly) BOOL allowsSensitiveAttachments;                 //@synthesize allowsSensitiveAttachments=_allowsSensitiveAttachments - In the implementation block
@property (nonatomic,retain) NSMutableString * collectionLog;                   //@synthesize collectionLog=_collectionLog - In the implementation block
@property (nonatomic,copy,readonly) NSURL * temporaryDirectoryURL;              //@synthesize temporaryDirectoryURL=_temporaryDirectoryURL - In the implementation block
-(id)init;
-(void)_log:(id)arg1 ;
-(id)attachmentsForParameters:(id)arg1 ;
-(NSURL *)temporaryDirectoryURL;
-(id)_generateTemporaryAttachmentDirectory;
-(void)_beginMonitoringForContentProtectionStatus;
-(void)_endMonitoringForContentProtectionStatus;
-(BOOL)_captureLog;
-(id)_currentProtectionStateString;
-(void)_logQueue_log:(id)arg1 timestamp:(double)arg2 ;
-(void)diagnosticOperation:(id)arg1 logMessage:(id)arg2 ;
-(BOOL)allowsSensitiveAttachments;
-(NSMutableString *)collectionLog;
-(void)setCollectionLog:(NSMutableString *)arg1 ;
@end

