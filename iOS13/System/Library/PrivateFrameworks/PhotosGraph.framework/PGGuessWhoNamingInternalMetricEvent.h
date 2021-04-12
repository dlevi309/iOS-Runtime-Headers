/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PLMetricEvent.h>

@class NSString, NSDictionary, PGGraph;

@interface PGGuessWhoNamingInternalMetricEvent : NSObject <PLMetricEvent> {

	NSString* _identifier;
	NSDictionary* _payload;
	PGGraph* _graph;
	double _precisionContactSuggestionTop1;
	double _precisionContactSuggestionTop2;
	double _precisionContactSuggestionTop3;
	double _precisionContactSuggestionTop10;
	double _precisionHighConfidenceContactSuggestion;
	unsigned long long _numberOfAddressSignalRegistrations;
	unsigned long long _numberOfBirthdaySignalRegistrations;
	unsigned long long _numberOfPotentialBirthdaySignalRegistrations;
	unsigned long long _numberOfMentionedAddressSignalRegistrations;
	unsigned long long _numberOfSharedAssetSignalRegistrations;
	unsigned long long _numberOfCMMSignalRegistrations;
	unsigned long long _numberOfCalendarSignalRegistrations;
	unsigned long long _numberOfFaceTimeSignalRegistrations;
	unsigned long long _numberOfContactFaceprintSignalRegistrations;
	unsigned long long _numberOfGenderSignalRegistrations;
	unsigned long long _numberOfSocialGroupSignalRegistrations;
	unsigned long long _numberOfRelationshipSignalRegistrations;
	double _precisionAddressSignal;
	double _precisionBirthdaySignal;
	double _precisionPotentialBirthdaySignal;
	double _precisionMentionedAddressSignal;
	double _precisionSharedAssetSignal;
	double _precisionCMMSignal;
	double _precisionCalendarSignal;
	double _precisionFaceTimeSignal;
	double _precisionContactFaceprintSignal;
	double _precisionGenderSignal;
	double _precisionSocialGroupSignal;
	double _precisionRelationshipSignal;
	unsigned long long _truePositiveAddressSignal;
	unsigned long long _falsePositiveAddressSignal;
	unsigned long long _truePositiveBirthdaySignal;
	unsigned long long _falsePositiveBirthdaySignal;
	unsigned long long _truePositivePotentialBirthdaySignal;
	unsigned long long _falsePositivePotentialBirthdaySignal;
	unsigned long long _truePositiveMentionedAddressSignal;
	unsigned long long _falsePositiveMentionedAddressSignal;
	unsigned long long _truePositiveSharedAssetSignal;
	unsigned long long _falsePositiveSharedAssetSignal;
	unsigned long long _truePositiveCMMSignal;
	unsigned long long _falsePositiveCMMSignal;
	unsigned long long _truePositiveCalendarSignal;
	unsigned long long _falsePositiveCalendarSignal;
	unsigned long long _truePositiveFaceTimeSignal;
	unsigned long long _falsePositiveFaceTimeSignal;
	unsigned long long _truePositiveContactFaceprintSignal;
	unsigned long long _falsePositiveContactFaceprintSignal;
	unsigned long long _truePositiveGenderSignal;
	unsigned long long _falsePositiveGenderSignal;
	unsigned long long _truePositiveSocialGroupSignal;
	unsigned long long _falsePositiveSocialGroupSignal;
	unsigned long long _truePositiveRelationshipSignal;
	unsigned long long _falsePositiveRelationshipSignal;

}

@property (assign,nonatomic) unsigned long long truePositiveAddressSignal;                                 //@synthesize truePositiveAddressSignal=_truePositiveAddressSignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveAddressSignal;                                //@synthesize falsePositiveAddressSignal=_falsePositiveAddressSignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositiveBirthdaySignal;                                //@synthesize truePositiveBirthdaySignal=_truePositiveBirthdaySignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveBirthdaySignal;                               //@synthesize falsePositiveBirthdaySignal=_falsePositiveBirthdaySignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositivePotentialBirthdaySignal;                       //@synthesize truePositivePotentialBirthdaySignal=_truePositivePotentialBirthdaySignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositivePotentialBirthdaySignal;                      //@synthesize falsePositivePotentialBirthdaySignal=_falsePositivePotentialBirthdaySignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositiveMentionedAddressSignal;                        //@synthesize truePositiveMentionedAddressSignal=_truePositiveMentionedAddressSignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveMentionedAddressSignal;                       //@synthesize falsePositiveMentionedAddressSignal=_falsePositiveMentionedAddressSignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositiveSharedAssetSignal;                             //@synthesize truePositiveSharedAssetSignal=_truePositiveSharedAssetSignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveSharedAssetSignal;                            //@synthesize falsePositiveSharedAssetSignal=_falsePositiveSharedAssetSignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositiveCMMSignal;                                     //@synthesize truePositiveCMMSignal=_truePositiveCMMSignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveCMMSignal;                                    //@synthesize falsePositiveCMMSignal=_falsePositiveCMMSignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositiveCalendarSignal;                                //@synthesize truePositiveCalendarSignal=_truePositiveCalendarSignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveCalendarSignal;                               //@synthesize falsePositiveCalendarSignal=_falsePositiveCalendarSignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositiveFaceTimeSignal;                                //@synthesize truePositiveFaceTimeSignal=_truePositiveFaceTimeSignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveFaceTimeSignal;                               //@synthesize falsePositiveFaceTimeSignal=_falsePositiveFaceTimeSignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositiveContactFaceprintSignal;                        //@synthesize truePositiveContactFaceprintSignal=_truePositiveContactFaceprintSignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveContactFaceprintSignal;                       //@synthesize falsePositiveContactFaceprintSignal=_falsePositiveContactFaceprintSignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositiveGenderSignal;                                  //@synthesize truePositiveGenderSignal=_truePositiveGenderSignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveGenderSignal;                                 //@synthesize falsePositiveGenderSignal=_falsePositiveGenderSignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositiveSocialGroupSignal;                             //@synthesize truePositiveSocialGroupSignal=_truePositiveSocialGroupSignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveSocialGroupSignal;                            //@synthesize falsePositiveSocialGroupSignal=_falsePositiveSocialGroupSignal - In the implementation block
@property (assign,nonatomic) unsigned long long truePositiveRelationshipSignal;                            //@synthesize truePositiveRelationshipSignal=_truePositiveRelationshipSignal - In the implementation block
@property (assign,nonatomic) unsigned long long falsePositiveRelationshipSignal;                           //@synthesize falsePositiveRelationshipSignal=_falsePositiveRelationshipSignal - In the implementation block
@property (nonatomic,retain) PGGraph * graph;                                                              //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) double precisionContactSuggestionTop1;                                        //@synthesize precisionContactSuggestionTop1=_precisionContactSuggestionTop1 - In the implementation block
@property (assign,nonatomic) double precisionContactSuggestionTop2;                                        //@synthesize precisionContactSuggestionTop2=_precisionContactSuggestionTop2 - In the implementation block
@property (assign,nonatomic) double precisionContactSuggestionTop3;                                        //@synthesize precisionContactSuggestionTop3=_precisionContactSuggestionTop3 - In the implementation block
@property (assign,nonatomic) double precisionContactSuggestionTop10;                                       //@synthesize precisionContactSuggestionTop10=_precisionContactSuggestionTop10 - In the implementation block
@property (assign,nonatomic) double precisionHighConfidenceContactSuggestion;                              //@synthesize precisionHighConfidenceContactSuggestion=_precisionHighConfidenceContactSuggestion - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAddressSignalRegistrations;                        //@synthesize numberOfAddressSignalRegistrations=_numberOfAddressSignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBirthdaySignalRegistrations;                       //@synthesize numberOfBirthdaySignalRegistrations=_numberOfBirthdaySignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPotentialBirthdaySignalRegistrations;              //@synthesize numberOfPotentialBirthdaySignalRegistrations=_numberOfPotentialBirthdaySignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMentionedAddressSignalRegistrations;               //@synthesize numberOfMentionedAddressSignalRegistrations=_numberOfMentionedAddressSignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSharedAssetSignalRegistrations;                    //@synthesize numberOfSharedAssetSignalRegistrations=_numberOfSharedAssetSignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCMMSignalRegistrations;                            //@synthesize numberOfCMMSignalRegistrations=_numberOfCMMSignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCalendarSignalRegistrations;                       //@synthesize numberOfCalendarSignalRegistrations=_numberOfCalendarSignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFaceTimeSignalRegistrations;                       //@synthesize numberOfFaceTimeSignalRegistrations=_numberOfFaceTimeSignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfContactFaceprintSignalRegistrations;               //@synthesize numberOfContactFaceprintSignalRegistrations=_numberOfContactFaceprintSignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfGenderSignalRegistrations;                         //@synthesize numberOfGenderSignalRegistrations=_numberOfGenderSignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSocialGroupSignalRegistrations;                    //@synthesize numberOfSocialGroupSignalRegistrations=_numberOfSocialGroupSignalRegistrations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRelationshipSignalRegistrations;                   //@synthesize numberOfRelationshipSignalRegistrations=_numberOfRelationshipSignalRegistrations - In the implementation block
@property (assign,nonatomic) double precisionAddressSignal;                                                //@synthesize precisionAddressSignal=_precisionAddressSignal - In the implementation block
@property (assign,nonatomic) double precisionBirthdaySignal;                                               //@synthesize precisionBirthdaySignal=_precisionBirthdaySignal - In the implementation block
@property (assign,nonatomic) double precisionPotentialBirthdaySignal;                                      //@synthesize precisionPotentialBirthdaySignal=_precisionPotentialBirthdaySignal - In the implementation block
@property (assign,nonatomic) double precisionMentionedAddressSignal;                                       //@synthesize precisionMentionedAddressSignal=_precisionMentionedAddressSignal - In the implementation block
@property (assign,nonatomic) double precisionSharedAssetSignal;                                            //@synthesize precisionSharedAssetSignal=_precisionSharedAssetSignal - In the implementation block
@property (assign,nonatomic) double precisionCMMSignal;                                                    //@synthesize precisionCMMSignal=_precisionCMMSignal - In the implementation block
@property (assign,nonatomic) double precisionCalendarSignal;                                               //@synthesize precisionCalendarSignal=_precisionCalendarSignal - In the implementation block
@property (assign,nonatomic) double precisionFaceTimeSignal;                                               //@synthesize precisionFaceTimeSignal=_precisionFaceTimeSignal - In the implementation block
@property (assign,nonatomic) double precisionContactFaceprintSignal;                                       //@synthesize precisionContactFaceprintSignal=_precisionContactFaceprintSignal - In the implementation block
@property (assign,nonatomic) double precisionGenderSignal;                                                 //@synthesize precisionGenderSignal=_precisionGenderSignal - In the implementation block
@property (assign,nonatomic) double precisionSocialGroupSignal;                                            //@synthesize precisionSocialGroupSignal=_precisionSocialGroupSignal - In the implementation block
@property (assign,nonatomic) double precisionRelationshipSignal;                                           //@synthesize precisionRelationshipSignal=_precisionRelationshipSignal - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                                                     //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)identifier;
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(NSDictionary *)payload;
-(id)initWithGraphManager:(id)arg1 ;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_incrementSignalRegistrationForSignal:(unsigned long long)arg1 suggestionEdge:(id)arg2 ;
-(void)_incrementSignalEvaluationForSignal:(unsigned long long)arg1 suggestionEdge:(id)arg2 isCorrect:(BOOL)arg3 ;
-(id)_peopleIdentitiesSignals;
-(double)_precisionFromTruePositivesCount:(unsigned long long)arg1 falsePositivesCount:(unsigned long long)arg2 ;
-(double)precisionContactSuggestionTop1;
-(void)setPrecisionContactSuggestionTop1:(double)arg1 ;
-(double)precisionContactSuggestionTop2;
-(void)setPrecisionContactSuggestionTop2:(double)arg1 ;
-(double)precisionContactSuggestionTop3;
-(void)setPrecisionContactSuggestionTop3:(double)arg1 ;
-(double)precisionContactSuggestionTop10;
-(void)setPrecisionContactSuggestionTop10:(double)arg1 ;
-(double)precisionHighConfidenceContactSuggestion;
-(void)setPrecisionHighConfidenceContactSuggestion:(double)arg1 ;
-(unsigned long long)numberOfAddressSignalRegistrations;
-(void)setNumberOfAddressSignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfBirthdaySignalRegistrations;
-(void)setNumberOfBirthdaySignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPotentialBirthdaySignalRegistrations;
-(void)setNumberOfPotentialBirthdaySignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMentionedAddressSignalRegistrations;
-(void)setNumberOfMentionedAddressSignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSharedAssetSignalRegistrations;
-(void)setNumberOfSharedAssetSignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCMMSignalRegistrations;
-(void)setNumberOfCMMSignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCalendarSignalRegistrations;
-(void)setNumberOfCalendarSignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfFaceTimeSignalRegistrations;
-(void)setNumberOfFaceTimeSignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfContactFaceprintSignalRegistrations;
-(void)setNumberOfContactFaceprintSignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfGenderSignalRegistrations;
-(void)setNumberOfGenderSignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSocialGroupSignalRegistrations;
-(void)setNumberOfSocialGroupSignalRegistrations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRelationshipSignalRegistrations;
-(void)setNumberOfRelationshipSignalRegistrations:(unsigned long long)arg1 ;
-(double)precisionAddressSignal;
-(void)setPrecisionAddressSignal:(double)arg1 ;
-(double)precisionBirthdaySignal;
-(void)setPrecisionBirthdaySignal:(double)arg1 ;
-(double)precisionPotentialBirthdaySignal;
-(void)setPrecisionPotentialBirthdaySignal:(double)arg1 ;
-(double)precisionMentionedAddressSignal;
-(void)setPrecisionMentionedAddressSignal:(double)arg1 ;
-(double)precisionSharedAssetSignal;
-(void)setPrecisionSharedAssetSignal:(double)arg1 ;
-(double)precisionCMMSignal;
-(void)setPrecisionCMMSignal:(double)arg1 ;
-(double)precisionCalendarSignal;
-(void)setPrecisionCalendarSignal:(double)arg1 ;
-(double)precisionFaceTimeSignal;
-(void)setPrecisionFaceTimeSignal:(double)arg1 ;
-(double)precisionContactFaceprintSignal;
-(void)setPrecisionContactFaceprintSignal:(double)arg1 ;
-(double)precisionGenderSignal;
-(void)setPrecisionGenderSignal:(double)arg1 ;
-(double)precisionSocialGroupSignal;
-(void)setPrecisionSocialGroupSignal:(double)arg1 ;
-(double)precisionRelationshipSignal;
-(void)setPrecisionRelationshipSignal:(double)arg1 ;
-(unsigned long long)truePositiveAddressSignal;
-(void)setTruePositiveAddressSignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveAddressSignal;
-(void)setFalsePositiveAddressSignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositiveBirthdaySignal;
-(void)setTruePositiveBirthdaySignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveBirthdaySignal;
-(void)setFalsePositiveBirthdaySignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositivePotentialBirthdaySignal;
-(void)setTruePositivePotentialBirthdaySignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositivePotentialBirthdaySignal;
-(void)setFalsePositivePotentialBirthdaySignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositiveMentionedAddressSignal;
-(void)setTruePositiveMentionedAddressSignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveMentionedAddressSignal;
-(void)setFalsePositiveMentionedAddressSignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositiveSharedAssetSignal;
-(void)setTruePositiveSharedAssetSignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveSharedAssetSignal;
-(void)setFalsePositiveSharedAssetSignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositiveCMMSignal;
-(void)setTruePositiveCMMSignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveCMMSignal;
-(void)setFalsePositiveCMMSignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositiveCalendarSignal;
-(void)setTruePositiveCalendarSignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveCalendarSignal;
-(void)setFalsePositiveCalendarSignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositiveFaceTimeSignal;
-(void)setTruePositiveFaceTimeSignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveFaceTimeSignal;
-(void)setFalsePositiveFaceTimeSignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositiveContactFaceprintSignal;
-(void)setTruePositiveContactFaceprintSignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveContactFaceprintSignal;
-(void)setFalsePositiveContactFaceprintSignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositiveGenderSignal;
-(void)setTruePositiveGenderSignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveGenderSignal;
-(void)setFalsePositiveGenderSignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositiveSocialGroupSignal;
-(void)setTruePositiveSocialGroupSignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveSocialGroupSignal;
-(void)setFalsePositiveSocialGroupSignal:(unsigned long long)arg1 ;
-(unsigned long long)truePositiveRelationshipSignal;
-(void)setTruePositiveRelationshipSignal:(unsigned long long)arg1 ;
-(unsigned long long)falsePositiveRelationshipSignal;
-(void)setFalsePositiveRelationshipSignal:(unsigned long long)arg1 ;
@end

