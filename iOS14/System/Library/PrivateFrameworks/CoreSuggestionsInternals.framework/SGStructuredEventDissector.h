/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>

@class NSString;

@interface SGStructuredEventDissector : SGPipelineDissector <SGMailMessageProcessing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)logShadowLoggingForSchema:(id)arg1 parentEntity:(id)arg2 timingProcessingInMs:(unsigned long long)arg3 eventClassification:(id)arg4 mailMessage:(id)arg5 ;
+(id)eventEnrichmentFromEntity:(id)arg1 ;
+(id)schemaOrgAndMissingEntitiesForPreprocessed:(id)arg1 eventClassification:(id)arg2 fromSuggestTool:(BOOL)arg3 ;
+(id)annotateContent:(id)arg1 withLabel:(id)arg2 forMatchingString:(id)arg3 ;
+(id)schemaStringForDateComponents:(id)arg1 ;
+(id)tupleWithEntity:(id)arg1 label:(id)arg2 ;
+(id)schemaStringForReservationStatus:(unsigned char)arg1 ;
+(id)annotationMatchingStringsForSubject:(id)arg1 ;
+(id)preprocessDomParserResult:(id)arg1 subject:(id)arg2 epoch:(double)arg3 category:(id)arg4 labelsWithMatchingStrings:(id)arg5 ;
+(id)nilEntities:(id)arg1 ;
+(id)outputLogsForClassification:(id)arg1 ;
+(id)jsMessageLogsDictionaryForMailMessage:(id)arg1 ;
+(id)addressDictionaryForAddressComponents:(id)arg1 ;
+(id)schemaStringForEventStatus:(unsigned char)arg1 ;
+(id)preprocessWithoutXPCForHTML:(id)arg1 subject:(id)arg2 epoch:(double)arg3 category:(id)arg4 labelsWithMatchingStrings:(id)arg5 ;
+(void)logFailedExtractionWithClassification:(id)arg1 missingEntities:(id)arg2 mlSummary:(id)arg3 shadowExtraction:(BOOL)arg4 timingProcessingInMs:(unsigned long long)arg5 forMessage:(id)arg6 parentEntity:(id)arg7 ;
+(void)addSchemaAsEnrichment:(id)arg1 inMessage:(id)arg2 parentEntity:(id)arg3 eventClassification:(id)arg4 ;
+(id)plainTextStringsByLabelInTaggedCharacterRanges:(id)arg1 inPlainText:(id)arg2 ;
+(id)tupleWithError:(id)arg1 label:(id)arg2 ;
+(id)schemaPostalAddressForPostalAddressExtraction:(id)arg1 ;
+(id)labelsWithMatchingStringsForMailMessage:(id)arg1 ;
-(id)preprocessHTML:(id)arg1 subject:(id)arg2 epoch:(double)arg3 category:(id)arg4 labelsWithMatchingStrings:(id)arg5 ;
-(id)tagsWithModelOutputFromEnrichedTaggedCharacterRanges:(id)arg1 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
@end

