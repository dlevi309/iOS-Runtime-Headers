/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol PMLTrainingProtocol;
@interface SGDetectedAttributeML : NSObject {

	id<PMLTrainingProtocol> _localTraining;

}
-(id)init;
-(id)detectionFromMatch:(id)arg1 plainTextContent:(id)arg2 extractionInfo:(id)arg3 isUnlikelyPhone:(BOOL)arg4 ;
-(void)addSessionForTrainingWithSource:(id)arg1 label:(long long)arg2 language:(id)arg3 objective:(unsigned long long)arg4 spotlightRef:(id)arg5 embeddedFeaturizer:(/*^block*/id)arg6 ;
-(id)selfIdDetectionWithTextMessage:(id)arg1 inConversation:(id)arg2 withSupervision:(id)arg3 ;
-(id)detectionFromMessage:(id)arg1 ddMatch:(id)arg2 matchedContext:(id)arg3 withSupervision:(id)arg4 inConversation:(id)arg5 entityLanguage:(id)arg6 ;
-(void)handleTextMessageContactSharingWithNegativeSample:(id)arg1 andLanguage:(id)arg2 ;
-(id)initWithTraining:(id)arg1 ;
-(void)handleTextMessageContactSharing:(id)arg1 andMatch:(id)arg2 andContext:(id)arg3 andLanguage:(id)arg4 withSupervision:(id)arg5 ;
-(id)birthdayCongratsTextMessage:(id)arg1 andLanguage:(id)arg2 andHealthStore:(id)arg3 ;
@end

