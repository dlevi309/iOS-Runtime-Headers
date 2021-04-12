/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLCloudChangeEventsResult.h>

@class NSString, NSArray, PLPersistentHistoryTransactionIterator, NSPersistentHistoryToken;

@interface PLCloudPersistentHistoryTransactionsResult : NSObject <PLCloudChangeEventsResult> {

	NSArray* _transactions;
	PLPersistentHistoryTransactionIterator* _transactionIterator;
	/*^block*/id _isTransactionSyncableFilter;
	long long _resultType;
	NSString* _currentTokenDescription;
	NSPersistentHistoryToken* _lastProcessedCoreDataToken;

}

@property (readonly) long long resultType;                                                    //@synthesize resultType=_resultType - In the implementation block
@property (copy,readonly) NSString * currentTokenDescription;                                 //@synthesize currentTokenDescription=_currentTokenDescription - In the implementation block
@property (copy,readonly) NSPersistentHistoryToken * lastProcessedCoreDataToken;              //@synthesize lastProcessedCoreDataToken=_lastProcessedCoreDataToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)isTransactionSyncableFilter;
+(id)fetchTransactionsSinceToken:(id)arg1 inContext:(id)arg2 ;
-(long long)resultType;
-(void)enumerateLocalEventsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)currentTokenDescription;
-(id)initWithSuccesfulTransactionIterator:(id)arg1 ;
-(id)initWithUnsuccessfulResultType:(long long)arg1 ;
-(id)initWithResultType:(long long)arg1 transactionIterator:(id)arg2 ;
-(void)sendLocalEvent:(id)arg1 toEnumerationBlock:(/*^block*/id)arg2 ;
-(id)localEventForAllTransactions;
-(void)updateLastProcessedCoreDataToken;
-(NSPersistentHistoryToken *)lastProcessedCoreDataToken;
@end

