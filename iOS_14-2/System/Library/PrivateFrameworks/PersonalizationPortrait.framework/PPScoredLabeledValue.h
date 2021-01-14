/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PPLabeledValue;

@interface PPScoredLabeledValue : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _flags;
	PPLabeledValue* _labeledValue;
	double _score;

}

@property (nonatomic,readonly) PPLabeledValue * labeledValue;              //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,readonly) double score;                               //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) unsigned char flags;                        //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)scoredLabeledValueWithLabeledValue:(id)arg1 score:(double)arg2 flags:(unsigned char)arg3 ;
-(long long)compare:(id)arg1 ;
-(id)initWithLabeledValue:(id)arg1 score:(double)arg2 flags:(unsigned char)arg3 ;
-(double)score;
-(unsigned char)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToScoredLabeledValue:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(PPLabeledValue *)labeledValue;
-(id)initWithCoder:(id)arg1 ;
-(long long)reverseCompare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

