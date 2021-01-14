/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/MFIMAPDownload.h>

@class NSString, NSError;

@interface MFIMAPSimpleDownload : MFIMAPDownload {

	NSString* _section;
	NSError* _error;
	unsigned long long _length;
	unsigned long long _lastBytesFetched;
	unsigned _knownLength : 1;
	unsigned _complete : 1;
	NSRange _range;
	unsigned long long _originalDataLength;
	unsigned long long _offsetAdjustment;

}
-(BOOL)isComplete;
-(id)section;
-(void)setError:(id)arg1 ;
-(id)error;
-(unsigned long long)expectedLength;
-(unsigned long long)bytesFetched;
-(BOOL)isSuccessful;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(unsigned long long)lengthOfDataBeforeLineConversion;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 length:(unsigned long long)arg3 lengthIsKnown:(BOOL)arg4 range:(NSRange)arg5 consumer:(id)arg6 ;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 estimatedLength:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 length:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 range:(NSRange)arg3 consumer:(id)arg4 ;
@end

