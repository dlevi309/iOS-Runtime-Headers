/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/


#import <IMAP/IMAP-Structs.h>
@class NSMutableArray;

@interface MFIMAPDownloadCache : NSObject {

	NSMutableArray* _downloads;

}
-(id)downloadForUid:(unsigned)arg1 section:(id)arg2 range:(NSRange)arg3 consumer:(id)arg4 ;
-(id)downloadForUid:(unsigned)arg1 section:(id)arg2 length:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)downloadForUid:(unsigned)arg1 section:(id)arg2 expectedLength:(unsigned long long)arg3 consumer:(id)arg4 ;
-(void)addCommandsForDownload:(id)arg1 toPipeline:(id)arg2 ;
-(void)handleFetchResponses:(id)arg1 ;
-(void)processResultsForUid:(unsigned)arg1 ;
-(void)cleanUpDownloadsForUid:(unsigned)arg1 ;
-(id)downloadForMessage:(id)arg1 ;
-(void)handleFetchResponse:(id)arg1 forUid:(unsigned)arg2 ;
@end

