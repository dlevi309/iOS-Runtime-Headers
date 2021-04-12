/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MSVBloomFilter : NSObject <NSSecureCoding> {

	CFBitVectorRef _vector;
	long long _vectorCapacity;
	unsigned long long _murmurSeed;
	long long _hashCount;
	float _falsePositiveTolerance;
	long long _capacity;

}

@property (nonatomic,readonly) long long capacity;                          //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) float falsePositiveTolerance;                //@synthesize falsePositiveTolerance=_falsePositiveTolerance - In the implementation block
@property (nonatomic,readonly) float falsePositiveProbability; 
@property (nonatomic,readonly) long long estimatedCount; 
+(BOOL)supportsSecureCoding;
-(id)_vectorIndexSetForObject:(id)arg1 ;
-(long long)capacity;
-(void)encodeWithCoder:(id)arg1 ;
-(float)falsePositiveProbability;
-(unsigned long long)_murmur2HashObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2 ;
-(long long)estimatedCount;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_fnvHashObject:(id)arg1 ;
-(id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2 murmurSeed:(unsigned long long)arg3 ;
-(float)falsePositiveTolerance;
-(void)dealloc;
@end

