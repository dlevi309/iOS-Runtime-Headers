/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>
#import <libobjc.A.dylib/SGTextMessageProcessing.h>

@class SGDetectedAttributeML, SGQuickResponsesML, SGContactPipelineHelper, SGHKHealthStore, NSSet, NSString;

@interface SGDetectedAttributeDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {

	SGDetectedAttributeML* _ml;
	SGQuickResponsesML* _mlQR;
	SGContactPipelineHelper* _contactsHelper;
	SGHKHealthStore* _healthStore;
	BOOL _filterWithAddressBook;
	float _unlikelyPhoneSamplingRate;
	NSSet* _hmmTrustedLanguages;
	NSSet* _ddTrustedLanguages;
	NSSet* _coreNLPTrustedLanguages;
	unsigned long long _selfIdentificationMessageCount;

}

@property (assign,nonatomic) unsigned long long selfIdentificationMessageCount;              //@synthesize selfIdentificationMessageCount=_selfIdentificationMessageCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearConversationCache;
+(BOOL)isPhoneContext:(id)arg1 ;
+(BOOL)isAddressContext:(id)arg1 ;
+(id)dissectorWithMockedMLTrainingForTests;
+(BOOL)isBirthdayContext:(id)arg1 ;
+(BOOL)isTwoPersonConversation:(id)arg1 ;
+(id)currentPatterns;
+(void)_logSelfIDForMessage:(id)arg1 detection:(id)arg2 modelType:(SGMSelfIdModelType_)arg3 modelVersion:(unsigned long long)arg4 ;
+(BOOL)isNameRequest:(id)arg1 ;
+(BOOL)isMaybeNameContext:(id)arg1 ;
+(id)patterns;
-(void)_removeUnwantedContactDetails:(id)arg1 entity:(id)arg2 ;
-(id)init;
-(void)handleTextMessageSelfIdentification:(id)arg1 entity:(id)arg2 withConversationHistory:(id)arg3 ;
-(void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)_makeSimplifiedListIdEmail:(id)arg1 ;
-(void)handleTextMessageBirthdayCongratulation:(id)arg1 entity:(id)arg2 withConversationHistory:(id)arg3 ;
-(id)detectionFromBodyDDMatch:(id)arg1 message:(id)arg2 withSupervisionToFill:(id)arg3 isUnlikelyPhone:(BOOL)arg4 ;
-(id)initWithML:(id)arg1 withMLQR:(id)arg2 andHealthStore:(id)arg3 ;
-(id)processTextMessageConversation:(id)arg1 threadLength:(unsigned long long)arg2 ;
-(id)filterDangerousSigPhoneDetections:(id)arg1 message:(id)arg2 ;
-(void)logBirthdayExtractionMetricForPerson:(id)arg1 forDate:(id)arg2 isFromCongratulation:(unsigned char)arg3 withModelVersion:(id)arg4 didRegexTrigger:(unsigned char)arg5 ;
-(void)_dissectMessage:(id)arg1 entity:(id)arg2 ;
-(id)detailTypeFromPrefix:(id)arg1 detectedLabelPointer:(NSRange*)arg2 ;
-(id)filterDangerousSigAddressDetections:(id)arg1 ;
-(id)detailTypeFromPrefix:(id)arg1 ;
-(id)_makeAlnum:(id)arg1 ;
-(unsigned long long)selfIdentificationMessageCount;
-(id)filterDangerousSigEmailDetections:(id)arg1 message:(id)arg2 ;
-(id)getLineContaining:(NSRange)arg1 inText:(id)arg2 ;
-(void)_addAuthorContactForMessage:(id)arg1 entity:(id)arg2 ;
-(id)detectionFromSignatureDDMatch:(id)arg1 message:(id)arg2 detectedLabelRange:(NSRange*)arg3 lastClaimedLabelRange:(NSRange)arg4 isUnlikelyPhone:(BOOL)arg5 ;
-(void)setSelfIdentificationMessageCount:(unsigned long long)arg1 ;
-(id)filterDangerousSigDetections:(id)arg1 message:(id)arg2 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)_extractEmailishTokenFromMailHeader:(id)arg1 ;
@end

