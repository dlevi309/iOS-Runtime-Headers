/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject {

	FCFileCoordinatedDictionary* _fileCoordinatedDictionary;

}

@property (nonatomic,retain) FCFileCoordinatedDictionary * fileCoordinatedDictionary;              //@synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary - In the implementation block
-(id)init;
-(FCFileCoordinatedDictionary *)fileCoordinatedDictionary;
-(void)peekAtTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(void)setFileCoordinatedDictionary:(FCFileCoordinatedDictionary *)arg1 ;
-(void)dequeueTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(void)enqueueTransaction:(id)arg1 withMaxTransactionCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

