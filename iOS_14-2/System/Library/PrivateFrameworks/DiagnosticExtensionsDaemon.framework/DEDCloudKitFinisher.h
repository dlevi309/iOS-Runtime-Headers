/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/DEDFinisher.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@protocol OS_os_log;
@class DEDBugSession, NSObject, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface DEDCloudKitFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving> {

	DEDBugSession* _session;
	NSObject*<OS_os_log> _log;
	unsigned long long _totalUploadSize;
	NSArray* _attachmentURLs;
	NSMutableArray* _attachmentRecords;
	NSMutableArray* _attachments;
	NSMutableDictionary* _uploadedBytes;

}

@property (__weak) DEDBugSession * session;                          //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                         //@synthesize log=_log - In the implementation block
@property (assign) unsigned long long totalUploadSize;               //@synthesize totalUploadSize=_totalUploadSize - In the implementation block
@property (retain) NSArray * attachmentURLs;                         //@synthesize attachmentURLs=_attachmentURLs - In the implementation block
@property (retain) NSMutableArray * attachmentRecords;               //@synthesize attachmentRecords=_attachmentRecords - In the implementation block
@property (retain) NSMutableArray * attachments;                     //@synthesize attachments=_attachments - In the implementation block
@property (retain) NSMutableDictionary * uploadedBytes;              //@synthesize uploadedBytes=_uploadedBytes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(void)setAttachments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attachments;
-(NSObject*<OS_os_log>)log;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(DEDBugSession *)session;
-(void)setSession:(DEDBugSession *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)attachmentURLs;
-(void)setAttachmentURLs:(NSArray *)arg1 ;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2 ;
-(void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1 ;
-(void)didCancelCollectionOnExtension:(id)arg1 ;
-(void)didCollectAttachmentGroup:(id)arg1 ;
-(void)didFinishAllCollections;
-(unsigned long long)totalUploadSize;
-(void)setTotalUploadSize:(unsigned long long)arg1 ;
-(id)flattenDirectories:(id)arg1 ;
-(void)setAttachmentRecords:(NSMutableArray *)arg1 ;
-(void)setUploadedBytes:(NSMutableDictionary *)arg1 ;
-(id)encryptLogsIfNecessary:(id)arg1 ;
-(NSMutableArray *)attachmentRecords;
-(NSMutableDictionary *)uploadedBytes;
-(void)localCleanup;
-(id)extractExtensionIdentifierFromAttachmentUrl:(id)arg1 ;
-(id)encryptLogsForExtensionIdentifier:(id)arg1 withAttachmentUrl:(id)arg2 ;
@end

