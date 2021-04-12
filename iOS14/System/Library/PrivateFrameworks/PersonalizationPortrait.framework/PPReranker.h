/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPNamedEntityStore, PPClientFeedbackHelper, _PASLock, NSString;

@interface PPReranker : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPNamedEntityStore* _namedEntityStore;
	PPClientFeedbackHelper* _clientFeedbackHelper;
	_PASLock* _dataLock;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNamedEntityStore:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_lazyLoadEntityRankMapWithError:(id*)arg1 ;
-(id)rerankedMediaItems:(id)arg1 error:(id*)arg2 ;
@end

