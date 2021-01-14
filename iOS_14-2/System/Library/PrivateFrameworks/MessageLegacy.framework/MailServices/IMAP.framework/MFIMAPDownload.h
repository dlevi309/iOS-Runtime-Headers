/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/


@class NSMutableArray, MFCountingDataConsumer, MFBaseFilterDataConsumer;

@interface MFIMAPDownload : NSObject {

	unsigned _uid;
	NSMutableArray* _pendingFetchResults;
	MFCountingDataConsumer* _countingConsumer;
	MFBaseFilterDataConsumer* _mainConsumer;

}

@property (nonatomic,readonly) MFBaseFilterDataConsumer * mainConsumer;              //@synthesize mainConsumer=_mainConsumer - In the implementation block
-(BOOL)isComplete;
-(unsigned)uid;
-(void)setError:(id)arg1 ;
-(id)error;
-(unsigned long long)expectedLength;
-(unsigned long long)bytesFetched;
-(BOOL)isSuccessful;
-(id)initWithUid:(unsigned)arg1 ;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(unsigned long long)lengthOfDataBeforeLineConversion;
-(MFBaseFilterDataConsumer *)mainConsumer;
@end

