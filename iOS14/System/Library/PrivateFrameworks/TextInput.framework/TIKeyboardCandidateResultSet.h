/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, TIKeyboardCandidate, NSDictionary, NSString, TIKeyboardIntermediateText;

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding> {

	BOOL _excludedExtensionCandidates;
	BOOL _inputManagerHasPendingCandidatesUpdate;
	NSArray* _candidates;
	unsigned long long _initialSelectedIndex;
	TIKeyboardCandidate* _defaultCandidate;
	NSArray* _sortMethods;
	NSDictionary* _sortMethodGroups;
	NSDictionary* _indexTitles;
	NSDictionary* _showExtensionCandidates;
	NSArray* _disambiguationCandidates;
	unsigned long long _generatedCandidateCount;
	unsigned long long _batchCandidateLocation;
	unsigned long long _selectedDisambiguationCandidateIndex;
	NSArray* _proactiveTriggers;
	NSString* _committedText;
	TIKeyboardIntermediateText* _uncommittedText;
	TIKeyboardCandidate* _acceptedCandidate;

}

@property (nonatomic,readonly) BOOL hasOnlySlottedCandidates; 
@property (nonatomic,readonly) BOOL hasOnlyCompletionCandidates; 
@property (nonatomic,readonly) unsigned long long slottedCandidatesCount; 
@property (nonatomic,retain) NSArray * initiallyHiddenCandidates; 
@property (assign,nonatomic) unsigned long long selectedHiddenCandidateIndex; 
@property (nonatomic,retain) NSArray * candidates;                                                 //@synthesize candidates=_candidates - In the implementation block
@property (assign,nonatomic) unsigned long long initialSelectedIndex;                              //@synthesize initialSelectedIndex=_initialSelectedIndex - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * defaultCandidate;                                 //@synthesize defaultCandidate=_defaultCandidate - In the implementation block
@property (nonatomic,retain) NSArray * sortMethods;                                                //@synthesize sortMethods=_sortMethods - In the implementation block
@property (nonatomic,retain) NSDictionary * sortMethodGroups;                                      //@synthesize sortMethodGroups=_sortMethodGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * indexTitles;                                           //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,retain) NSDictionary * showExtensionCandidates;                               //@synthesize showExtensionCandidates=_showExtensionCandidates - In the implementation block
@property (nonatomic,retain) NSArray * disambiguationCandidates;                                   //@synthesize disambiguationCandidates=_disambiguationCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long selectedDisambiguationCandidateIndex;              //@synthesize selectedDisambiguationCandidateIndex=_selectedDisambiguationCandidateIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasCandidates; 
@property (nonatomic,readonly) BOOL hasOnlyProactiveCandidates; 
@property (nonatomic,readonly) NSArray * proactiveTriggers;                                        //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidate * firstCandidate; 
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (assign,nonatomic) BOOL excludedExtensionCandidates;                                     //@synthesize excludedExtensionCandidates=_excludedExtensionCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long generatedCandidateCount;                           //@synthesize generatedCandidateCount=_generatedCandidateCount - In the implementation block
@property (assign,nonatomic) unsigned long long batchCandidateLocation;                            //@synthesize batchCandidateLocation=_batchCandidateLocation - In the implementation block
@property (nonatomic,readonly) BOOL isDummySet; 
@property (nonatomic,retain) NSString * committedText;                                             //@synthesize committedText=_committedText - In the implementation block
@property (nonatomic,retain) TIKeyboardIntermediateText * uncommittedText;                         //@synthesize uncommittedText=_uncommittedText - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * acceptedCandidate;                              //@synthesize acceptedCandidate=_acceptedCandidate - In the implementation block
@property (assign,nonatomic) BOOL inputManagerHasPendingCandidatesUpdate;                          //@synthesize inputManagerHasPendingCandidatesUpdate=_inputManagerHasPendingCandidatesUpdate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 disambiguationCandidates:(id)arg8 selectedDisambiguationCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10 ;
+(id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 disambiguationCandidates:(id)arg8 selectedDisambiguationCandidateIndex:(unsigned long long)arg9 ;
+(id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 ;
+(id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10 ;
+(id)dummySet;
+(id)setWithCandidates:(id)arg1 proactiveTriggers:(id)arg2 ;
+(id)setWithCandidates:(id)arg1 ;
-(BOOL)hasOnlySlottedCandidates;
-(BOOL)hasOnlyCompletionCandidates;
-(unsigned long long)slottedCandidatesCount;
-(id)initWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 disambiguationCandidates:(id)arg8 selectedDisambiguationCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10 ;
-(BOOL)isSubsetOf:(id)arg1 ;
-(NSDictionary *)indexTitles;
-(void)setInitialSelectedIndex:(unsigned long long)arg1 ;
-(void)setSortMethods:(NSArray *)arg1 ;
-(void)setDefaultCandidate:(TIKeyboardCandidate *)arg1 ;
-(NSDictionary *)sortMethodGroups;
-(void)setSortMethodGroups:(NSDictionary *)arg1 ;
-(void)setIndexTitles:(NSDictionary *)arg1 ;
-(NSDictionary *)showExtensionCandidates;
-(void)setShowExtensionCandidates:(NSDictionary *)arg1 ;
-(NSArray *)initiallyHiddenCandidates;
-(void)setDisambiguationCandidates:(NSArray *)arg1 ;
-(void)setGeneratedCandidateCount:(unsigned long long)arg1 ;
-(void)setUncommittedText:(TIKeyboardIntermediateText *)arg1 ;
-(unsigned long long)selectedDisambiguationCandidateIndex;
-(void)setSelectedDisambiguationCandidateIndex:(unsigned long long)arg1 ;
-(BOOL)excludedExtensionCandidates;
-(void)setExcludedExtensionCandidates:(BOOL)arg1 ;
-(void)setCommittedText:(NSString *)arg1 ;
-(void)setInputManagerHasPendingCandidatesUpdate:(BOOL)arg1 ;
-(void)setInitiallyHiddenCandidates:(NSArray *)arg1 ;
-(unsigned long long)selectedHiddenCandidateIndex;
-(void)setSelectedHiddenCandidateIndex:(unsigned long long)arg1 ;
-(BOOL)hasCandidates;
-(void)encodeWithCoder:(id)arg1 ;
-(TIKeyboardCandidate *)firstCandidate;
-(BOOL)hasMetadata;
-(void)setBatchCandidateLocation:(unsigned long long)arg1 ;
-(NSString *)committedText;
-(unsigned long long)generatedCandidateCount;
-(BOOL)inputManagerHasPendingCandidatesUpdate;
-(BOOL)hasOnlyProactiveCandidates;
-(TIKeyboardCandidate *)acceptedCandidate;
-(void)setAcceptedCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)defaultCandidate;
-(unsigned long long)initialSelectedIndex;
-(TIKeyboardIntermediateText *)uncommittedText;
-(unsigned long long)batchCandidateLocation;
-(id)setByAppendingSet:(id)arg1 ;
-(id)description;
-(unsigned long long)positionInCandidateList:(id)arg1 ;
-(BOOL)isDummySet;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sortMethods;
-(NSArray *)candidates;
-(NSArray *)proactiveTriggers;
-(void)setCandidates:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)disambiguationCandidates;
@end

