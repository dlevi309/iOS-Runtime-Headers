/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSMutableSet, NSArray, NSPersistentHistoryToken, PFHistoryAnalyzerOptions, NSSet;

@interface PFHistoryAnalyzerContext : NSObject {

	NSMutableDictionary* _objectIDToState;
	NSMutableSet* _processedTransactionIDs;
	NSArray* _sortedStates;
	BOOL _isFinished;
	NSPersistentHistoryToken* _finalHistoryToken;
	PFHistoryAnalyzerOptions* _options;

}

@property (nonatomic,readonly) PFHistoryAnalyzerOptions * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSSet * processedTransactionIDs;                           //@synthesize processedTransactionIDs=_processedTransactionIDs - In the implementation block
@property (nonatomic,readonly) NSPersistentHistoryToken * finalHistoryToken;              //@synthesize finalHistoryToken=_finalHistoryToken - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;                                           //@synthesize isFinished=_isFinished - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(BOOL)reset:(id*)arg1 ;
-(NSPersistentHistoryToken *)finalHistoryToken;
-(PFHistoryAnalyzerOptions *)options;
-(BOOL)isFinished;
-(BOOL)resetStateForObjectID:(id)arg1 error:(id*)arg2 ;
-(BOOL)processChange:(id)arg1 error:(id*)arg2 ;
-(id)analyzerStateForChangedObjectID:(id)arg1 error:(id*)arg2 ;
-(BOOL)finishProcessing:(id*)arg1 ;
-(id)fetchSortedStates:(id*)arg1 ;
-(id)newAnalyzerStateForChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)processTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldPruneAnalyzerState:(id)arg1 ;
-(void)processFinalState:(id)arg1 ;
-(NSSet *)processedTransactionIDs;
-(void)dealloc;
@end

