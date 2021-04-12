/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject {

	FCFileCoordinatedDictionary* _fileCoordinatedDictionary;

}

@property (nonatomic,retain) FCFileCoordinatedDictionary * fileCoordinatedDictionary;              //@synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary - In the implementation block
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(FCFileCoordinatedDictionary *)fileCoordinatedDictionary;
-(void)setFileCoordinatedDictionary:(FCFileCoordinatedDictionary *)arg1 ;
-(void)enqueueTransaction:(id)arg1 withMaxTransactionCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)peekAtTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(void)dequeueTransactionsWithCompletion:(/*^block*/id)arg1 ;
@end

