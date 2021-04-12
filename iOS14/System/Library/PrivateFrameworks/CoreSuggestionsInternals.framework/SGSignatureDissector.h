/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>

@class NSNumber, NSString;

@interface SGSignatureDissector : SGPipelineDissector <SGMailMessageProcessing> {

	NSNumber* _ignoreDataDetectorsForTesting;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singleLineSignatureLeadingCharacterSet;
-(BOOL)shouldIgnoreSignature:(id)arg1 signatureRange:(NSRange*)arg2 isInhuman:(BOOL*)arg3 ;
-(id)authorName:(id)arg1 ;
-(id)authorFirstname:(id)arg1 ;
-(NSRange)hmmPlausibleSignatureRange:(id)arg1 ;
-(id)findSignaturePrefixesInMessage:(id)arg1 withSignaturePrefixes:(id)arg2 ;
-(BOOL)_paragraphWithContent:(id)arg1 range:(NSRange)arg2 exceedsLineLimit:(unsigned long long)arg3 orCharacterLimit:(unsigned long long)arg4 ;
-(NSRange)miniSignatureRange:(id)arg1 ;
-(id)findValedictionCommencedSignatureRanges:(id)arg1 ;
-(NSRange)trailingSenderNameLineRange:(id)arg1 ;
-(NSRange)findSignaturePrefix:(id)arg1 ;
-(NSRange)rangeOfSenderName:(id)arg1 inRange:(NSRange)arg2 restrictLength:(BOOL)arg3 forMessage:(id)arg4 ;
-(NSRange)rangeOfSenderNameComponents:(id)arg1 withFullname:(id)arg2 inSubstring:(id)arg3 ;
-(id)initIgnoringDataDetectors;
-(id)findRejectSig:(id)arg1 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(NSRange)hmmSignatureRangeWithContent:(id)arg1 detectedData:(id)arg2 quotedRegions:(id)arg3 authorName:(id)arg4 ;
-(NSRange)hmmSignatureRange:(id)arg1 ;
-(NSRange)findValediction:(id)arg1 ;
-(NSRange)signatureRange:(id)arg1 ;
@end

