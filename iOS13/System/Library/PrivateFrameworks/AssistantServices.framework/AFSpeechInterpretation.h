/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechInterpretation : NSObject <NSSecureCoding> {

	NSArray* _tokens;

}

@property (nonatomic,copy) NSArray * tokens;              //@synthesize tokens=_tokens - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)text;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(long long)confidenceScore;
-(long long)averageConfidenceScore;
-(long long)confidenceScoreAvg;
-(long long)confidenceScoreMax;
-(long long)confidenceScoreMin;
@end

