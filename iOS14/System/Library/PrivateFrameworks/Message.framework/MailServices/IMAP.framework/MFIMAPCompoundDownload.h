/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/MFIMAPDownload.h>

@class NSMutableArray;

@interface MFIMAPCompoundDownload : MFIMAPDownload {

	NSMutableArray* _subdownloads;

}
-(BOOL)isComplete;
-(unsigned long long)expectedLength;
-(unsigned long long)bytesFetched;
-(BOOL)isSuccessful;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(unsigned long long)lengthOfDataBeforeLineConversion;
-(id)subdownloads;
-(void)addSubdownload:(id)arg1 ;
-(void)removeSubdownload:(id)arg1 ;
@end

