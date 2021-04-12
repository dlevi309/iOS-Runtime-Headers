/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/

#import <libobjc.A.dylib/PRErrorModeling.h>

@protocol PRErrorModeling;
@class NSString;

@interface PRErrorModel : NSObject <PRErrorModeling> {

	id<PRErrorModeling> _customErrorModel;

}

@property (readonly) BOOL hasCustomReplacementErrorScores; 
@property (readonly) BOOL hasCustomTranspositionErrorScores; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2 ;
-(double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2 ;
-(double)errorScoreForType:(unsigned long long)arg1 ;
-(BOOL)hasCustomReplacementErrorScores;
-(BOOL)hasCustomTranspositionErrorScores;
-(id)initWithCustomErrorModel:(id)arg1 ;
@end

