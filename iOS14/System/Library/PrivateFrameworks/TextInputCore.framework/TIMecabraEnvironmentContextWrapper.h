/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSString, NSMutableArray, NSDate, NSArray;

@interface TIMecabraEnvironmentContextWrapper : NSObject {

	int _textContentType;
	int _shuangpinType;
	NSString* _appContext;
	unsigned long long _candidateIndex;
	unsigned long long _candidateInternalIndex;
	unsigned long long _environmentCandidateCount;
	MecabraRef _mecabraEngine;
	MecabraContextRef _mecabraContext;
	NSMutableArray* _temporaryCandidates;
	NSMutableArray* _environmentCandidates;
	NSDate* _lastAnalyzeInputDate;

}

@property (nonatomic,retain) NSMutableArray * environmentCandidates;                      //@synthesize environmentCandidates=_environmentCandidates - In the implementation block
@property (assign,nonatomic) MecabraContextRef mecabraContext;                            //@synthesize mecabraContext=_mecabraContext - In the implementation block
@property (nonatomic,retain) NSDate * lastAnalyzeInputDate;                               //@synthesize lastAnalyzeInputDate=_lastAnalyzeInputDate - In the implementation block
@property (nonatomic,copy) NSString * appContext;                                         //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic) unsigned long long candidateIndex;                           //@synthesize candidateIndex=_candidateIndex - In the implementation block
@property (assign,nonatomic) unsigned long long candidateInternalIndex;                   //@synthesize candidateInternalIndex=_candidateInternalIndex - In the implementation block
@property (nonatomic,readonly) NSArray * contextCandidates; 
@property (nonatomic,readonly) NSArray * contextCandidateStrings; 
@property (nonatomic,readonly) unsigned long long contextCandidateCount; 
@property (nonatomic,readonly) NSArray * environmentCandidateStrings; 
@property (nonatomic,readonly) unsigned long long environmentCandidateCount;              //@synthesize environmentCandidateCount=_environmentCandidateCount - In the implementation block
@property (nonatomic,readonly) NSArray * inlineCandidates; 
@property (nonatomic,readonly) MecabraRef mecabraEngine;                                  //@synthesize mecabraEngine=_mecabraEngine - In the implementation block
@property (nonatomic,retain) NSMutableArray * temporaryCandidates;                        //@synthesize temporaryCandidates=_temporaryCandidates - In the implementation block
@property (assign,nonatomic) int textContentType;                                         //@synthesize textContentType=_textContentType - In the implementation block
@property (assign,nonatomic) int shuangpinType;                                           //@synthesize shuangpinType=_shuangpinType - In the implementation block
-(void)setTextContentType:(int)arg1 ;
-(void)clearContext;
-(void)setKeyboardLayout:(id)arg1 ;
-(int)textContentType;
-(void)clearAll;
-(NSString *)appContext;
-(void)setAppContext:(NSString *)arg1 ;
-(void)dealloc;
-(unsigned long long)candidateIndex;
-(void)setCandidateIndex:(unsigned long long)arg1 ;
-(id)initWithMecabraEngine:(MecabraRef)arg1 language:(int)arg2 ;
-(BOOL)analyzeString:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)analyzeInput:(id)arg1 options:(unsigned long long)arg2 ;
-(void)commitPredictionCandidate:(void*)arg1 ;
-(void)setGeometryModel:(void*)arg1 modelData:(CFArrayRef)arg2 ;
-(void)setShuangpinType:(int)arg1 ;
-(void)acceptInlineCandidates;
-(void)partiallyCommitInlineCandidate:(void*)arg1 ;
-(void)completelyCommitInlineCandidate:(void*)arg1 ;
-(void)revertInlineCandidate;
-(void)declareEndOfSentence;
-(void)addContextCandidate:(void*)arg1 accept:(BOOL)arg2 ;
-(void)addContextStringCandidate:(void*)arg1 ;
-(void)addEnvironmentCandidate:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)contextCandidateCount;
-(NSArray *)contextCandidates;
-(NSArray *)contextCandidateStrings;
-(void)clearInline;
-(NSMutableArray *)environmentCandidates;
-(NSArray *)environmentCandidateStrings;
-(NSArray *)inlineCandidates;
-(void)removeCandidatesInRange:(NSRange)arg1 ;
-(void)revertLearningForCandidate:(void*)arg1 ;
-(void)syncEnvironmentAndContextCandidates;
-(NSMutableArray *)temporaryCandidates;
-(id)contextString:(id)arg1 forRightContext:(BOOL)arg2 ;
-(BOOL)predictionCandidatesWithOptions:(unsigned long long)arg1 maxNumberOfCandidates:(unsigned long long)arg2 ;
-(void*)createMecabraCandidateFromString:(id)arg1 ;
-(unsigned long long)candidateInternalIndex;
-(void)setCandidateInternalIndex:(unsigned long long)arg1 ;
-(unsigned long long)environmentCandidateCount;
-(MecabraRef)mecabraEngine;
-(MecabraContextRef)mecabraContext;
-(void)setMecabraContext:(MecabraContextRef)arg1 ;
-(void)setTemporaryCandidates:(NSMutableArray *)arg1 ;
-(int)shuangpinType;
-(void)setEnvironmentCandidates:(NSMutableArray *)arg1 ;
-(NSDate *)lastAnalyzeInputDate;
-(void)setLastAnalyzeInputDate:(NSDate *)arg1 ;
@end

