/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSArray *)interpretations;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInterpretations:(NSArray *)arg1 ;
-(BOOL)isLowConfidence;
-(id)bestInterpretation;
-(id)initWithInterpretations:(id)arg1 isLowConfidence:(BOOL)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)firstInterpretation;
-(id)allInterpretationStringsAndScores;
-(void)setIsLowConfidence:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

