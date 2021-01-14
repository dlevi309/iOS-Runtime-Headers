/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@interface SGSelfIDSupervision : NSObject {

	BOOL _isPositiveExample;
	BOOL _isNegativeExample;
	NSRange _candidateNameRange;

}

@property (assign,nonatomic) BOOL isPositiveExample;                  //@synthesize isPositiveExample=_isPositiveExample - In the implementation block
@property (assign,nonatomic) BOOL isNegativeExample;                  //@synthesize isNegativeExample=_isNegativeExample - In the implementation block
@property (assign,nonatomic) NSRange candidateNameRange;              //@synthesize candidateNameRange=_candidateNameRange - In the implementation block
-(id)initWithMessage:(id)arg1 candidateName:(NSRange)arg2 ;
-(BOOL)isPositiveExample;
-(void)setIsPositiveExample:(BOOL)arg1 ;
-(BOOL)isNegativeExample;
-(void)setIsNegativeExample:(BOOL)arg1 ;
-(NSRange)candidateNameRange;
-(void)setCandidateNameRange:(NSRange)arg1 ;
@end

