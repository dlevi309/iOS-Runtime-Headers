/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary, NSArray, TIKeyboardCandidate, NSString, NSDictionary;

@interface TIWordSearchCandidateResultSet : NSObject <NSCopying> {

	BOOL _empty;
	NSMutableArray* _mutableCandidates;
	NSMutableDictionary* _mutableCandidateRefsDictionary;
	NSArray* _disambiguationCandidates;
	unsigned long long _selectedDisambiguationCandidateIndex;
	TIKeyboardCandidate* _candidateAfterSegmentBreak;
	NSArray* _proactiveCandidates;
	NSArray* _autoconvertedCandidates;
	NSString* _autoconvertedCandidateString;
	NSString* _autoconvertedInputString;
	NSMutableArray* _mutableProactiveTriggers;

}

@property (nonatomic,retain) NSMutableArray * mutableCandidates;                                   //@synthesize mutableCandidates=_mutableCandidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableCandidateRefsDictionary;                 //@synthesize mutableCandidateRefsDictionary=_mutableCandidateRefsDictionary - In the implementation block
@property (nonatomic,copy) NSArray * autoconvertedCandidates;                                      //@synthesize autoconvertedCandidates=_autoconvertedCandidates - In the implementation block
@property (nonatomic,retain) NSString * autoconvertedCandidateString;                              //@synthesize autoconvertedCandidateString=_autoconvertedCandidateString - In the implementation block
@property (nonatomic,retain) NSString * autoconvertedInputString;                                  //@synthesize autoconvertedInputString=_autoconvertedInputString - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableProactiveTriggers;                          //@synthesize mutableProactiveTriggers=_mutableProactiveTriggers - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,copy) TIKeyboardCandidate * candidateAfterSegmentBreak;                       //@synthesize candidateAfterSegmentBreak=_candidateAfterSegmentBreak - In the implementation block
@property (nonatomic,readonly) NSDictionary * candidateRefsDictionary; 
@property (nonatomic,copy) NSArray * disambiguationCandidates;                                     //@synthesize disambiguationCandidates=_disambiguationCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long selectedDisambiguationCandidateIndex;              //@synthesize selectedDisambiguationCandidateIndex=_selectedDisambiguationCandidateIndex - In the implementation block
@property (nonatomic,readonly) NSArray * proactiveTriggers; 
@property (nonatomic,retain) NSArray * proactiveCandidates;                                        //@synthesize proactiveCandidates=_proactiveCandidates - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                            //@synthesize empty=_empty - In the implementation block
+(id)emptySet;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)setEmpty:(BOOL)arg1 ;
-(NSArray *)candidates;
-(NSArray *)disambiguationCandidates;
-(NSArray *)proactiveTriggers;
-(NSMutableArray *)mutableCandidates;
-(void)setDisambiguationCandidates:(NSArray *)arg1 ;
-(unsigned long long)selectedDisambiguationCandidateIndex;
-(void)setSelectedDisambiguationCandidateIndex:(unsigned long long)arg1 ;
-(TIKeyboardCandidate *)candidateAfterSegmentBreak;
-(void)setCandidateAfterSegmentBreak:(TIKeyboardCandidate *)arg1 ;
-(id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 disambiguationCandidates:(id)arg3 selectedDisambiguationCandidateIndex:(unsigned long long)arg4 ;
-(id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 ;
-(NSDictionary *)candidateRefsDictionary;
-(void)addCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned long long)arg4 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5 annotation:(id)arg6 ;
-(void)insertSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)addMecabraCandidate:(id)arg1 mecabraCandidateRef:(void*)arg2 ;
-(void)addMecabraProactiveCandidate:(void*)arg1 triggerSourceType:(unsigned char)arg2 ;
-(void)addMecabraFacemarkCandidate:(void*)arg1 forInput:(id)arg2 ;
-(void)addSyntheticMecabraProactiveCandidate:(id)arg1 triggerSourceType:(unsigned char)arg2 ;
-(void)insertMecabraCandidate:(id)arg1 mecabraCandidateRef:(void*)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setAutoconvertedMecabraCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 ;
-(void)moveCandidate:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)clearProactiveTriggers;
-(void)setMutableCandidates:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)mutableCandidateRefsDictionary;
-(void)setMutableCandidateRefsDictionary:(NSMutableDictionary *)arg1 ;
-(NSArray *)proactiveCandidates;
-(void)setProactiveCandidates:(NSArray *)arg1 ;
-(NSArray *)autoconvertedCandidates;
-(void)setAutoconvertedCandidates:(NSArray *)arg1 ;
-(NSString *)autoconvertedCandidateString;
-(void)setAutoconvertedCandidateString:(NSString *)arg1 ;
-(NSString *)autoconvertedInputString;
-(void)setAutoconvertedInputString:(NSString *)arg1 ;
-(NSMutableArray *)mutableProactiveTriggers;
@end

