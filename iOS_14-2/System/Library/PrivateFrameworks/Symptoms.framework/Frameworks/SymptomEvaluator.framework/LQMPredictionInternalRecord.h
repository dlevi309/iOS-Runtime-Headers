/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LQMPredictionInternalRecord : NSObject <NSCopying, NSSecureCoding> {

	unsigned _offset;
	unsigned _length;
	unsigned _level;
	double _confidence;

}

@property (readonly) unsigned offset;                //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned length;                //@synthesize length=_length - In the implementation block
@property (readonly) unsigned level;                 //@synthesize level=_level - In the implementation block
@property (readonly) double confidence;              //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)length;
-(unsigned)offset;
-(id)description;
-(unsigned)level;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)adjustOffsetTo:(unsigned)arg1 ;
-(void)adjustConfidenceTo:(double)arg1 ;
-(void)adjustLengthTo:(unsigned)arg1 ;
-(id)initWithOffset:(unsigned)arg1 length:(unsigned)arg2 level:(unsigned)arg3 confidence:(double)arg4 ;
@end

