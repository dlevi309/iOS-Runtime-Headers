/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/

#import <DataDetectorsNaturalLanguage/IPFeatureScanner.h>

@class NSArray, NSMutableArray, IPFeatureData;

@interface IPFeatureMailScanner : IPFeatureScanner {

	BOOL _subjectContainsDate;
	NSArray* _subjectDataDetectorsFeatures;
	NSArray* _subjectSentenceFeatures;
	NSMutableArray* _subjectKeywordFeatures;
	NSMutableArray* _subjectAndBodyDataDetectorsFeatures;
	IPFeatureData* _dateInSubjectFeatureData;

}

@property (retain) NSArray * subjectDataDetectorsFeatures;                            //@synthesize subjectDataDetectorsFeatures=_subjectDataDetectorsFeatures - In the implementation block
@property (retain) NSArray * subjectSentenceFeatures;                                 //@synthesize subjectSentenceFeatures=_subjectSentenceFeatures - In the implementation block
@property (retain) NSMutableArray * subjectKeywordFeatures;                           //@synthesize subjectKeywordFeatures=_subjectKeywordFeatures - In the implementation block
@property (retain) NSMutableArray * subjectAndBodyDataDetectorsFeatures;              //@synthesize subjectAndBodyDataDetectorsFeatures=_subjectAndBodyDataDetectorsFeatures - In the implementation block
@property (assign) BOOL subjectContainsDate;                                          //@synthesize subjectContainsDate=_subjectContainsDate - In the implementation block
@property (retain) IPFeatureData * dateInSubjectFeatureData;                          //@synthesize dateInSubjectFeatureData=_dateInSubjectFeatureData - In the implementation block
-(void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 ;
-(double)confidenceForEvent:(id)arg1 baseConfidence:(double)arg2 ;
-(void)resetScanState;
-(void)enrichEvents:(id)arg1 messageUnits:(id)arg2 dateInSubject:(id)arg3 dataFeatures:(id)arg4 ;
-(void)setSubjectDataDetectorsFeatures:(NSArray *)arg1 ;
-(NSArray *)subjectDataDetectorsFeatures;
-(void)doSynchronousScanWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isBlacklistedSender:(id)arg1 ;
-(void)setDateInSubjectFeatureData:(IPFeatureData *)arg1 ;
-(void)setSubjectContainsDate:(BOOL)arg1 ;
-(void)processScanOfMessageUnit:(id)arg1 ;
-(BOOL)subjectContainsDate;
-(IPFeatureData *)dateInSubjectFeatureData;
-(NSMutableArray *)subjectKeywordFeatures;
-(void)setSubjectSentenceFeatures:(NSArray *)arg1 ;
-(void)setSubjectKeywordFeatures:(NSMutableArray *)arg1 ;
-(void)setSubjectAndBodyDataDetectorsFeatures:(NSMutableArray *)arg1 ;
-(id)emailParticipantNames;
-(NSArray *)subjectSentenceFeatures;
-(NSMutableArray *)subjectAndBodyDataDetectorsFeatures;
@end

