/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechUtterance : NSObject <NSSecureCoding> {

	NSArray* _interpretationIndices;
	long long _confidenceScore;
	long long _source;

}

@property (nonatomic,copy) NSArray * interpretationIndices;              //@synthesize interpretationIndices=_interpretationIndices - In the implementation block
@property (assign,nonatomic) long long confidenceScore;                  //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (assign,nonatomic) long long source;                           //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(long long)confidenceScore;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setConfidenceScore:(long long)arg1 ;
-(void)setInterpretationIndices:(NSArray *)arg1 ;
-(void)setSource:(long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)interpretationIndices;
-(id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)source;
@end

