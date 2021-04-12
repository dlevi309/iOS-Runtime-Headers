/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHRecognizer;

@interface CHCandidateRefinementStep : CHPostprocessingStep {

	BOOL _shouldKeepOutOfPatternCandidates;
	BOOL _shouldKeepDuplicateTokenIDs;
	BOOL _shouldKeepOriginalSpelling;
	CHRecognizer* _recognizer;

}

@property (assign,nonatomic) CHRecognizer * recognizer;                          //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic) BOOL shouldKeepOutOfPatternCandidates;              //@synthesize shouldKeepOutOfPatternCandidates=_shouldKeepOutOfPatternCandidates - In the implementation block
@property (assign,nonatomic) BOOL shouldKeepDuplicateTokenIDs;                   //@synthesize shouldKeepDuplicateTokenIDs=_shouldKeepDuplicateTokenIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldKeepOriginalSpelling;                    //@synthesize shouldKeepOriginalSpelling=_shouldKeepOriginalSpelling - In the implementation block
-(id)process:(id)arg1 ;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(BOOL)shouldKeepDuplicateTokenIDs;
-(BOOL)shouldKeepOutOfPatternCandidates;
-(id)initWithRecognizer:(id)arg1 shouldKeepOutOfPatternCandidates:(BOOL)arg2 shouldKeepDuplicateTokenIDs:(BOOL)arg3 ;
-(void)setShouldKeepOutOfPatternCandidates:(BOOL)arg1 ;
-(void)setShouldKeepDuplicateTokenIDs:(BOOL)arg1 ;
-(BOOL)shouldKeepOriginalSpelling;
-(void)setShouldKeepOriginalSpelling:(BOOL)arg1 ;
@end

