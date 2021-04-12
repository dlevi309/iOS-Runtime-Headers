/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)persistentHistoryPageCount;
-(double)transactionsPageCountPercent;
-(double)transactionStringsPageCountPercent;
-(double)changesPageCountPercent;
-(double)persistentHistoryPageCountPercent;
-(double)_pageCountAsPercentOfFile:(long long)arg1 ;
-(long long)filePageCount;
-(void)setFilePageCount:(long long)arg1 ;
-(long long)transactionsPageCount;
-(void)setTransactionsPageCount:(long long)arg1 ;
-(long long)transactionStringsPageCount;
-(void)setTransactionStringsPageCount:(long long)arg1 ;
-(long long)changesPageCount;
-(void)setChangesPageCount:(long long)arg1 ;
@end

