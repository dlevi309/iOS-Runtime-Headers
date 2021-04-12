/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>

@class PPContactStorage, PPMFeedbackRegistered, PPM2FeedbackPortraitRegistered;

@interface PPLocalContactStore : NSObject <PPFeedbackAccepting> {

	PPContactStorage* _contactStorage;
	PPMFeedbackRegistered* _feedbackTracker;
	PPM2FeedbackPortraitRegistered* _feedbackTracker2;

}
+(id)defaultStore;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)rankedContactsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)contactsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(double)arg3 error:(id*)arg4 ;
-(id)scoredContactsWithContacts:(id)arg1 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 ;
-(id)contactNameRecordsForClient:(id)arg1 error:(id*)arg2 ;
-(id)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2 ;
@end

