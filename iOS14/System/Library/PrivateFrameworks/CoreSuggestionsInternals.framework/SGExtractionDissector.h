/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>
#import <libobjc.A.dylib/SGTextMessageProcessing.h>
#import <libobjc.A.dylib/SGInteractionProcessing.h>

@protocol SGReverseTemplateJS;
@class NSXPCConnection, _PASLock, NSString;

@interface SGExtractionDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing, SGInteractionProcessing> {

	NSXPCConnection* _xpcConnection;
	id<SGReverseTemplateJS> _reverseTemplateJSNoXPC;
	_PASLock* _classifierCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)addressDictionaryToString:(id)arg1 ;
+(id)addParams:(id)arg1 toParameterizedString:(id)arg2 ;
+(id)addParams:(id)arg1 toParameterizedString:(id)arg2 allowAlternatives:(BOOL)arg3 ;
+(BOOL)shouldIgnoreMailMessage:(id)arg1 ;
-(void)_addEnrichmentsToEntityForOutput:(id)arg1 interaction:(id)arg2 entity:(id)arg3 startTime:(unsigned long long)arg4 backPressureHazard:(int)arg5 ;
-(id)entityForOutputItem:(id)arg1 withSiblings:(id)arg2 parentEntity:(id)arg3 outputExceptions:(id)arg4 outputInfos:(id)arg5 interaction:(id)arg6 ;
-(id)getAndRemoveItemReferencesFromSchemas:(id)arg1 ;
-(id)init;
-(id)packedJSURLFromURL:(id)arg1 title:(id)arg2 payload:(id)arg3 creationTimestamp:(double)arg4 ;
-(id)jsDictForResolveCandidates:(id)arg1 forCategory:(id)arg2 label:(id)arg3 rawIndexSet:(id)arg4 taggedCharacterRanges:(id)arg5 ;
-(id)packedJSMailMessageFromMailMessage:(id)arg1 ;
-(id)packedJSTextMessageFromTextMessage:(id)arg1 ;
-(void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)jsonLdOutputFromMailMessage:(id)arg1 ;
-(id)enrichmentsFromSchemas:(id)arg1 inMessage:(id)arg2 parentEntity:(id)arg3 ;
-(void)addEnrichmentsToEntityForOutputItems:(id)arg1 exceptions:(id)arg2 jsMessageLogs:(id)arg3 interaction:(id)arg4 entity:(id)arg5 startTime:(unsigned long long)arg6 backPressureHazard:(int)arg7 ;
-(void)dissectURL:(id)arg1 title:(id)arg2 htmlPayload:(id)arg3 entity:(id)arg4 ;
-(BOOL)isStructuredEventCandidateForURL:(id)arg1 title:(id)arg2 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)eventsFromSchemaOrgItems:(id)arg1 ;
-(id)packedJSSchemaFromSchemaOrgItems:(id)arg1 ;
-(id)packedJSInteractionFromInteraction:(id)arg1 bundleIdentifier:(id)arg2 creationTimestamp:(double)arg3 ;
-(id)packedJSMailMessageFromMailMessage:(id)arg1 context:(id)arg2 ;
-(id)resolveCandidates:(id)arg1 forCategory:(id)arg2 label:(id)arg3 rawIndexSet:(id)arg4 taggedCharacterRanges:(id)arg5 ;
-(id)jsonLdOutputFromPackedJSEntity:(id)arg1 ;
-(id)entityForOutputItem:(id)arg1 parentEntity:(id)arg2 outputExceptions:(id)arg3 outputInfos:(id)arg4 ;
-(void)dissectInteraction:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(BOOL)shouldDownloadFull:(id)arg1 ;
-(id)outputFromPackedJSMailMessage:(id)arg1 ;
-(id)resolveCandidatesWithoutXPC:(id)arg1 forCategory:(id)arg2 label:(id)arg3 rawIndexSet:(id)arg4 taggedCharacterRanges:(id)arg5 ;
-(id)reverseMapMailMessage:(id)arg1 withPreprocessedHTML:(id)arg2 forCategory:(id)arg3 withSchemExpectation:(id)arg4 ;
-(id)eventClassificationForMailMessage:(id)arg1 ;
-(id)eventActivitiesForReservationWithReference:(id)arg1 inParentEntity:(id)arg2 interaction:(id)arg3 ;
-(id)eventClassificationWithoutXPCForMailMessage:(id)arg1 ;
-(void)addInteractionTagsToEnrichment:(id)arg1 inEntity:(id)arg2 interaction:(id)arg3 ;
-(id)jsonLdOutputFromURL:(id)arg1 title:(id)arg2 payload:(id)arg3 extractionDate:(id)arg4 ;
-(id)packedJSURLFromURL:(id)arg1 title:(id)arg2 payload:(id)arg3 ;
-(void)_addEnrichmentsToEntityForOutput:(id)arg1 entity:(id)arg2 startTime:(unsigned long long)arg3 backPressureHazard:(int)arg4 ;
-(id)outputFromPackedJSSchema:(id)arg1 ;
-(BOOL)exceedsMaxHTMLContentLength:(unsigned long long)arg1 ;
-(id)diffSchemas:(id)arg1 withExpectedSchemas:(id)arg2 ;
-(id)jsonLdOutputFromTextMessage:(id)arg1 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)entityForOutputItem:(id)arg1 parentEntity:(id)arg2 outputExceptions:(id)arg3 outputInfos:(id)arg4 interaction:(id)arg5 ;
-(void)dealloc;
-(id)parseHTML:(id)arg1 ;
-(id)outputFromPackedJSTextMessage:(id)arg1 ;
@end

