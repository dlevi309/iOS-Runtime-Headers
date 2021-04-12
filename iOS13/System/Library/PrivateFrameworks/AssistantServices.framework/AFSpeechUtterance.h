/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(long long)confidenceScore;
-(void)setConfidenceScore:(long long)arg1 ;
-(NSArray *)interpretationIndices;
-(id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2 ;
-(void)setInterpretationIndices:(NSArray *)arg1 ;
@end

