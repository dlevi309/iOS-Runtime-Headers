/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

#import <DACalDAV/DAEventsAttachmentDownloadConsumer.h>

@class NSString;

@interface MobileCalDAVAccountRefreshActorAttachmentDownloadDelegate : NSObject <DAEventsAttachmentDownloadConsumer> {

	id _retainedSelf;
	NSString* _uuid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadFinishedError:(id)arg1 ;
-(id)initWithAttachmentUUID:(id)arg1 ;
-(void)beginDownload;
-(void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2 ;
@end

