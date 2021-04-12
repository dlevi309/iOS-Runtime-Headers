/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechInterpretation : NSObject <NSSecureCoding> {

	NSArray* _tokens;

}

@property (nonatomic,copy) NSArray * tokens;              //@synthesize tokens=_tokens - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTokens:(NSArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)tokens;
-(long long)confidenceScore;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)averageConfidenceScore;
-(id)description;
-(id)text;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)confidenceScoreAvg;
-(long long)confidenceScoreMax;
-(long long)confidenceScoreMin;
-(BOOL)isEqual:(id)arg1 ;
@end

