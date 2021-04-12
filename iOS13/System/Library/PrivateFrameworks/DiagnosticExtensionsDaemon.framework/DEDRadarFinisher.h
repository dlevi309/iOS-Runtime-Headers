/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/DEDFinisher.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@protocol OS_os_log;
@class DEDBugSession, NSObject, NSArray, NSMutableSet, NSString;

@interface DEDRadarFinisher : NSObject <NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving> {

	float _percentComplete;
	DEDBugSession* _session;
	NSObject*<OS_os_log> _log;
	NSArray* _attachments;
	NSMutableSet* _uploadItems;

}

@property (__weak) DEDBugSession * session;                         //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (assign) float percentComplete;                           //@synthesize percentComplete=_percentComplete - In the implementation block
@property (retain) NSArray * attachments;                           //@synthesize attachments=_attachments - In the implementation block
@property (retain) NSMutableSet * uploadItems;                      //@synthesize uploadItems=_uploadItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(DEDBugSession *)session;
-(void)setSession:(DEDBugSession *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(float)percentComplete;
-(void)setPercentComplete:(float)arg1 ;
-(BOOL)isWatch;
-(void)setUploadItems:(NSMutableSet *)arg1 ;
-(NSMutableSet *)uploadItems;
-(id)getUploadItemForTask:(id)arg1 ;
-(BOOL)allUploadsComplete;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2 ;
@end

