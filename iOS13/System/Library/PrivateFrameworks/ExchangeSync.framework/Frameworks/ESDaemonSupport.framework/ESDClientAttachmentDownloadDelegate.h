/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/

#import <ESDaemonSupport/ESDClientDelegate.h>
#import <libobjc.A.dylib/DAEventsAttachmentDownloadConsumer.h>

@class NSString;

@interface ESDClientAttachmentDownloadDelegate : ESDClientDelegate <DAEventsAttachmentDownloadConsumer> {

	NSString* _attachmentUUID;
	id _downloadID;

}

@property (nonatomic,retain) NSString * attachmentUUID;              //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,retain) id downloadID;                          //@synthesize downloadID=_downloadID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(void)setDownloadID:(id)arg1 ;
-(id)downloadID;
-(NSString *)attachmentUUID;
-(void)downloadFinishedError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 attachmentUUID:(id)arg2 client:(id)arg3 ;
-(void)beginDownload;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2 ;
@end

