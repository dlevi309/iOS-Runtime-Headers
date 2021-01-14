/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class SGMContactDetailExtraction, SGMContactDetailSent, PETEventTracker2;

@interface SGDetectedAttributeMetrics : NSObject {

	SGMContactDetailExtraction* _contactDetailExtraction;
	SGMContactDetailSent* _contactDetailSent;
	PETEventTracker2* _pet2Tracker;

}

@property (nonatomic,retain) SGMContactDetailExtraction * contactDetailExtraction;              //@synthesize contactDetailExtraction=_contactDetailExtraction - In the implementation block
@property (nonatomic,retain) SGMContactDetailSent * contactDetailSent;                          //@synthesize contactDetailSent=_contactDetailSent - In the implementation block
@property (nonatomic,retain) PETEventTracker2 * pet2Tracker;                                    //@synthesize pet2Tracker=_pet2Tracker - In the implementation block
+(id)instance;
+(void)_recordExtractionEventFromSource:(SGMDocumentType_)arg1 foundInSignature:(BOOL)arg2 isDDSignature:(BOOL)arg3 detailType:(SGMContactDetailType_)arg4 outcome:(SGMContactDetailExtractionOutcome_)arg5 foundInCNContact:(SGMContactDetailOwner_)arg6 modelVersion:(id)arg7 isUnlikelyPhone:(BOOL)arg8 sigSource:(SGMContactDetailExtractionSignatureSource_)arg9 ;
+(void)_recordExtractionOutcome:(SGMContactDetailExtractionOutcome_)arg1 detailType:(SGMContactDetailType_)arg2 fromMessage:(id)arg3 foundInSignature:(BOOL)arg4 isDDSignature:(BOOL)arg5 detailType:(unsigned long long)arg6 detailValue:(id)arg7 modelVersion:(id)arg8 isUnlikelyPhone:(BOOL)arg9 ;
+(void)recordExtractionOutcome:(SGMContactDetailExtractionOutcome_)arg1 fromMessage:(id)arg2 foundInSignature:(BOOL)arg3 isDDSignature:(BOOL)arg4 detection:(id)arg5 ;
+(void)recordExtractionOutcome:(SGMContactDetailExtractionOutcome_)arg1 fromMessage:(id)arg2 foundInSignature:(BOOL)arg3 isDDSignature:(BOOL)arg4 match:(id)arg5 modelVersion:(id)arg6 isUnlikelyPhone:(BOOL)arg7 ;
+(void)recordExtractionOutcome:(SGMContactDetailExtractionOutcome_)arg1 fromMessage:(id)arg2 foundInSignature:(BOOL)arg3 isDDSignature:(BOOL)arg4 match:(id)arg5 foundInCNContact:(SGMContactDetailOwner_)arg6 modelVersion:(id)arg7 isUnlikelyPhone:(BOOL)arg8 ;
+(void)recordExtractionOutcome:(SGMContactDetailExtractionOutcome_)arg1 forDetectionsInMessage:(id)arg2 signatureRange:(NSRange)arg3 isDDSignature:(BOOL)arg4 ;
+(void)recordBirthdayExtractionAccuracy:(unsigned char)arg1 withOffset:(id)arg2 withModelVersion:(id)arg3 isFromCongratulation:(unsigned char)arg4 didRegexTrigger:(unsigned char)arg5 ;
+(void)recordSelfIdModelScore:(BOOL)arg1 model:(int)arg2 supervision:(int)arg3 ;
+(id)nameForDataDetectorMatch:(id)arg1 withValue:(id)arg2 ;
+(id)tokenizeMessageContent:(id)arg1 ;
+(void)recordSentContactDetailWithMessage:(id)arg1 match:(id)arg2 found:(SGMContactDetailFoundIn_)arg3 ;
-(id)initWithTracker:(id)arg1 ;
-(SGMContactDetailExtraction *)contactDetailExtraction;
-(void)setContactDetailExtraction:(SGMContactDetailExtraction *)arg1 ;
-(SGMContactDetailSent *)contactDetailSent;
-(void)setContactDetailSent:(SGMContactDetailSent *)arg1 ;
-(PETEventTracker2 *)pet2Tracker;
-(void)setPet2Tracker:(PETEventTracker2 *)arg1 ;
@end

