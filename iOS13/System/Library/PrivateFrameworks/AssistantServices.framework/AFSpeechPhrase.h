/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding> {

	BOOL _isLowConfidence;
	NSArray* _interpretations;

}

@property (nonatomic,copy) NSArray * interpretations;              //@synthesize interpretations=_interpretations - In the implementation block
@property (assign,nonatomic) BOOL isLowConfidence;                 //@synthesize isLowConfidence=_isLowConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLowConfidence;
-(void)setIsLowConfidence:(BOOL)arg1 ;
-(NSArray *)interpretations;
-(id)initWithInterpretations:(id)arg1 isLowConfidence:(BOOL)arg2 ;
-(id)bestInterpretation;
-(id)firstInterpretation;
-(id)allInterpretationStringsAndScores;
-(void)setInterpretations:(NSArray *)arg1 ;
@end

