/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/


@class NSMutableArray, NSMutableString, NSString, TIConvertedCandidate;

@interface TIConversionHistory : NSObject {

	BOOL _inputChangedSinceLastConversion;
	BOOL _invalid;
	NSMutableArray* _convertedCandidates;
	NSMutableArray* _mutableConvertedCandidateRefs;
	NSMutableString* _mutableConvertedCandidateText;
	unsigned long long _revertCount;

}

@property (assign,nonatomic) BOOL invalid;                                                 //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) NSMutableArray * convertedCandidates;                         //@synthesize convertedCandidates=_convertedCandidates - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableConvertedCandidateRefs;               //@synthesize mutableConvertedCandidateRefs=_mutableConvertedCandidateRefs - In the implementation block
@property (nonatomic,retain) NSMutableString * mutableConvertedCandidateText;              //@synthesize mutableConvertedCandidateText=_mutableConvertedCandidateText - In the implementation block
@property (assign,nonatomic) unsigned long long revertCount;                               //@synthesize revertCount=_revertCount - In the implementation block
@property (assign,nonatomic) BOOL inputChangedSinceLastConversion;                         //@synthesize inputChangedSinceLastConversion=_inputChangedSinceLastConversion - In the implementation block
@property (nonatomic,readonly) NSString * convertedCandidateText; 
@property (nonatomic,readonly) unsigned long long convertedLength; 
@property (nonatomic,readonly) TIConvertedCandidate * lastConvertedCandidate; 
-(id)init;
-(void)invalidate;
-(void)clear;
-(BOOL)isValid;
-(BOOL)invalid;
-(void)setInvalid:(BOOL)arg1 ;
-(unsigned long long)convertedLength;
-(NSString *)convertedCandidateText;
-(void)addCandidate:(id)arg1 candidateRef:(id)arg2 replacedAmbiguousPinyinSyllable:(id)arg3 replacementUnambiguousPinyinSyllable:(id)arg4 convertedInput:(id)arg5 ;
-(void)didRevertLastConvertedCandidate;
-(BOOL)shouldRevertConvertedCandidateOnDeletionFromMarkedText:(id)arg1 ;
-(TIConvertedCandidate *)lastConvertedCandidate;
-(BOOL)inputChangedSinceLastConversion;
-(void)setInputChangedSinceLastConversion:(BOOL)arg1 ;
-(NSMutableArray *)convertedCandidates;
-(void)setConvertedCandidates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableConvertedCandidateRefs;
-(void)setMutableConvertedCandidateRefs:(NSMutableArray *)arg1 ;
-(NSMutableString *)mutableConvertedCandidateText;
-(void)setMutableConvertedCandidateText:(NSMutableString *)arg1 ;
-(unsigned long long)revertCount;
-(void)setRevertCount:(unsigned long long)arg1 ;
@end

