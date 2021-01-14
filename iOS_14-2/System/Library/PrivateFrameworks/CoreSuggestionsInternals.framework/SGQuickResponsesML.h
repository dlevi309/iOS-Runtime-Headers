/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol PMLTrainingProtocol;
@class NSDictionary, _PASLock;

@interface SGQuickResponsesML : NSObject {

	id<PMLTrainingProtocol> _localTraining;
	NSDictionary* _languagesToRecord;
	_PASLock* _perLanguageRecordersLock;

}
+(BOOL)_isSharingSenderLocation:(id)arg1 senderName:(id)arg2 ;
+(BOOL)_isImageAttachment:(id)arg1 ;
-(id)initWithTraining:(id)arg1 andRecorders:(id)arg2 ;
-(id)init;
-(id)_dynamicLabelContentForReply:(id)arg1 prompt:(id)arg2 language:(id)arg3 ;
-(void)dpRecordMessageText:(id)arg1 inLanguage:(id)arg2 ;
-(void)trainQuickResponsesForMessage:(id)arg1 withConversationHistory:(id)arg2 ;
@end

