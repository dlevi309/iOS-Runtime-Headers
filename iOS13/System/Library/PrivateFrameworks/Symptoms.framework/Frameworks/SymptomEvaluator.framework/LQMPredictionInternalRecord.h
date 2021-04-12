/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)length;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)level;
-(double)confidence;
-(unsigned)offset;
-(void)adjustOffsetTo:(unsigned)arg1 ;
-(void)adjustConfidenceTo:(double)arg1 ;
-(void)adjustLengthTo:(unsigned)arg1 ;
-(id)initWithOffset:(unsigned)arg1 length:(unsigned)arg2 level:(unsigned)arg3 confidence:(double)arg4 ;
@end

