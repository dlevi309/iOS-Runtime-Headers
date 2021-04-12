/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXFeedbackStore;

@interface PXFeedbackCollector : NSObject {

	PXFeedbackStore* _feedbackStore;

}

@property (nonatomic,readonly) PXFeedbackStore * feedbackStore;              //@synthesize feedbackStore=_feedbackStore - In the implementation block
-(id)init;
-(id)feedbackEntryFromDictionary:(id)arg1 ;
-(void)addFeedbackEntry:(id)arg1 ;
-(id)addFeedbackFromDictionary:(id)arg1 ;
-(void)removeFeedbackEntry:(id)arg1 ;
-(id)_uniqueSystemIdentifier;
-(PXFeedbackStore *)feedbackStore;
-(id)_appVersion;
@end

