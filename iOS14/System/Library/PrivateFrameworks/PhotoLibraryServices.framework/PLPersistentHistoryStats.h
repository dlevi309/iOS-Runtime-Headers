/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLPersistentHistoryStats : NSObject {

	long long _filePageCount;
	long long _transactionsPageCount;
	long long _transactionStringsPageCount;
	long long _changesPageCount;

}

@property (assign,nonatomic) long long filePageCount;                                  //@synthesize filePageCount=_filePageCount - In the implementation block
@property (assign,nonatomic) long long transactionsPageCount;                          //@synthesize transactionsPageCount=_transactionsPageCount - In the implementation block
@property (assign,nonatomic) long long transactionStringsPageCount;                    //@synthesize transactionStringsPageCount=_transactionStringsPageCount - In the implementation block
@property (assign,nonatomic) long long changesPageCount;                               //@synthesize changesPageCount=_changesPageCount - In the implementation block
@property (nonatomic,readonly) long long persistentHistoryPageCount; 
@property (nonatomic,readonly) double transactionsPageCountPercent; 
@property (nonatomic,readonly) double transactionStringsPageCountPercent; 
@property (nonatomic,readonly) double changesPageCountPercent; 
@property (nonatomic,readonly) double persistentHistoryPageCountPercent; 
+(id)statsFromDatabase:(id)arg1 ;
-(long long)filePageCount;
-(long long)persistentHistoryPageCount;
-(double)transactionsPageCountPercent;
-(double)transactionStringsPageCountPercent;
-(double)changesPageCountPercent;
-(double)persistentHistoryPageCountPercent;
-(double)_pageCountAsPercentOfFile:(long long)arg1 ;
-(void)setFilePageCount:(long long)arg1 ;
-(long long)transactionsPageCount;
-(void)setTransactionsPageCount:(long long)arg1 ;
-(long long)transactionStringsPageCount;
-(void)setTransactionStringsPageCount:(long long)arg1 ;
-(long long)changesPageCount;
-(void)setChangesPageCount:(long long)arg1 ;
@end

