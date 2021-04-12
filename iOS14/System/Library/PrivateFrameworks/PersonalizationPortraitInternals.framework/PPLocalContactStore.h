/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>

@class PPContactStorage;

@interface PPLocalContactStore : NSObject <PPFeedbackAccepting> {

	PPContactStorage* _contactStorage;

}
+(id)defaultStore;
-(id)initWithStorage:(id)arg1 ;
-(BOOL)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)contactsChangeHistoryForClient:(id)arg1 error:(id*)arg2 ;
-(id)contactHandlesForTopics:(id)arg1 error:(id*)arg2 ;
-(id)rankedContactsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)meCard;
-(id)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2 ;
-(BOOL)chineseBirthdayFound;
-(id)contactHandlesForSource:(id)arg1 error:(id*)arg2 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 ;
-(id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(id)arg3 error:(id*)arg4 ;
-(void)clearChangeHistoryForClient:(id)arg1 historyResult:(id)arg2 ;
-(id)scoredContactsWithContacts:(id)arg1 ;
-(id)contactsWithQuery:(id)arg1 error:(id*)arg2 ;
@end

