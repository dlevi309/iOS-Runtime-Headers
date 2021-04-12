/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPRecordMonitoringHelper, PPClientFeedbackHelper, NSString;

@interface PPContactStore : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPRecordMonitoringHelper* _monitoringHelper;
	PPClientFeedbackHelper* _clientFeedbackHelper;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
-(/*^block*/id)_recordGenerator;
-(BOOL)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)contactHandlesForTopics:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterRankedContactsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2 ;
-(void)_loadContactNameRecordsWithDelegate:(id)arg1 ;
-(id)contactHandlesForSource:(id)arg1 error:(id*)arg2 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendChangesToDelegates;
@end

