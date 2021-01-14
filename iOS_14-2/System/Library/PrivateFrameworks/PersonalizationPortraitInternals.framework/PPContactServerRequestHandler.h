/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPContactServerProtocol.h>

@protocol PPContactClientProtocol;
@class PPXPCServerPipelinedBatchQueryManager, PPLocalContactStore, NSString;

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol> {

	id<PPContactClientProtocol> _clientProxy;
	PPXPCServerPipelinedBatchQueryManager* _queryManager;
	AB _isTerminated;
	PPLocalContactStore* _store;
	NSString* _clientProcessName;

}

@property (nonatomic,copy) NSString * clientProcessName;              //@synthesize clientProcessName=_clientProcessName - In the implementation block
-(void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2 ;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)rankedContactsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(NSString *)clientProcessName;
-(void)unblockPendingQueries;
-(void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)setClientProcessName:(NSString *)arg1 ;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)setIsTerminated;
-(void)contactHandlesForTopics:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)contactHandlesForSource:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)contactNameRecordChangesForClient:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

