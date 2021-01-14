/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)downloadID;
-(void)downloadFinishedError:(id)arg1 ;
-(void)beginDownload;
-(void)finishWithError:(id)arg1 ;
-(void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2 ;
-(void)setDownloadID:(id)arg1 ;
-(NSString *)attachmentUUID;
-(void)dealloc;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(id)initWithAccountID:(id)arg1 attachmentUUID:(id)arg2 client:(id)arg3 ;
@end

