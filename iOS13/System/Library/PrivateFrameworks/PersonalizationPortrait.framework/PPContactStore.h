/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)_recordGenerator;
-(void)_sendChangesToDelegates;
-(BOOL)iterRankedContactsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadContactNameRecordsWithDelegate:(id)arg1 ;
-(BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2 ;
@end

