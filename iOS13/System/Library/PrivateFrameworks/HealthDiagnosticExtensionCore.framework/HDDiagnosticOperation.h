/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDiagnosticExtensionCore.framework/HealthDiagnosticExtensionCore
*/

#import <HealthDiagnosticExtensionCore/HealthDiagnosticExtensionCore-Structs.h>
#import <Foundation/NSOperation.h>

@protocol HDDiagnosticOperationDelegate, OS_dispatch_queue;
@class NSMutableArray, NSURL, NSObject, NSMutableString, NSArray, NSString;

@interface HDDiagnosticOperation : NSOperation {

	NSMutableArray* _attachments;
	id<HDDiagnosticOperationDelegate> _delegate;
	NSURL* _attachmentDirectoryURL;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableString* _reportContents;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableString * reportContents;                               //@synthesize reportContents=_reportContents - In the implementation block
@property (assign,nonatomic,__weak) id<HDDiagnosticOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSURL * attachmentDirectoryURL;                          //@synthesize attachmentDirectoryURL=_attachmentDirectoryURL - In the implementation block
@property (copy,readonly) NSURL * healthDirectoryURL; 
@property (copy,readonly) NSArray * attachments; 
@property (copy,readonly) NSString * reportFilename; 
+(id)operationWithAttachmentDirectoryURL:(id)arg1 ;
-(void)run;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id<HDDiagnosticOperationDelegate>)delegate;
-(void)setDelegate:(id<HDDiagnosticOperationDelegate>)arg1 ;
-(NSArray *)attachments;
-(void)main;
-(id)stringFromDate:(id)arg1 ;
-(void)log:(id)arg1 ;
-(void)appendNewline;
-(id)_headerString;
-(NSURL *)healthDirectoryURL;
-(NSURL *)attachmentDirectoryURL;
-(NSString *)reportFilename;
-(id)openReadOnlyDatabaseAtURL:(id)arg1 ;
-(unsigned long long)getFileStatisticsForDirectoryWithURL:(id)arg1 earliestModificationDate:(double*)arg2 totalFileSize:(long long*)arg3 maxFileSize:(long long*)arg4 ;
-(void)appendStrongSeparator;
-(BOOL)copyDatabaseFromURL:(id)arg1 toURL:(id)arg2 ;
-(long long)fileSizeForURL:(id)arg1 ;
-(id)prettyPrintFileSize:(long long)arg1 ;
-(id)fileCreationDateForURL:(id)arg1 ;
-(id)fileModificationDateForURL:(id)arg1 ;
-(id)initWithAttachmentDirectoryURL:(id)arg1 ;
-(NSMutableString *)reportContents;
-(void)setReportContents:(NSMutableString *)arg1 ;
-(void)_appendString:(id)arg1 newLine:(BOOL)arg2 ;
-(void)_queue_submitAttachment:(id)arg1 ;
-(BOOL)_copyDatabase:(sqlite3Ref)arg1 toDatabase:(sqlite3Ref)arg2 ;
-(id)_fileAttributesAtURL:(id)arg1 ;
-(double)absoluteTimeForTimespec:(timespec)arg1 ;
-(void)appendSeparator;
-(void)submitAttachment:(id)arg1 ;
-(void)submitAttachments:(id)arg1 ;
@end

