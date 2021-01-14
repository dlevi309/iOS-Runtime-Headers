/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXFeedbackCollector, PXFeedbackSender;

@interface PXFeedbackManager : NSObject {

	unsigned long long _feedbackCollectionType;
	PXFeedbackCollector* _feedbackCollector;
	PXFeedbackSender* _feedbackSender;

}

@property (nonatomic,readonly) PXFeedbackCollector * feedbackCollector;              //@synthesize feedbackCollector=_feedbackCollector - In the implementation block
@property (nonatomic,readonly) PXFeedbackSender * feedbackSender;                    //@synthesize feedbackSender=_feedbackSender - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)removeFeedbackEntry:(id)arg1 ;
-(PXFeedbackSender *)feedbackSender;
-(id)provideUserFeedbackFromDictionary:(id)arg1 forFeedbackType:(unsigned long long)arg2 ;
-(void)provideUserFeedbackEntry:(id)arg1 ;
-(PXFeedbackCollector *)feedbackCollector;
@end

