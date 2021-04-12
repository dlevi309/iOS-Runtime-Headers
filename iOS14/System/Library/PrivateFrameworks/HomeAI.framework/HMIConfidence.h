/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMIConfidence : HMFObject <NSSecureCoding> {

	double _value;
	NSArray* _levelThresholds;

}

@property (readonly) NSArray * levelThresholds;              //@synthesize levelThresholds=_levelThresholds - In the implementation block
@property (readonly) long long level; 
@property (readonly) double value;                           //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)description;
-(long long)level;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)value;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)levelThresholds;
-(id)initWithValue:(double)arg1 levelThresholds:(id)arg2 ;
@end

