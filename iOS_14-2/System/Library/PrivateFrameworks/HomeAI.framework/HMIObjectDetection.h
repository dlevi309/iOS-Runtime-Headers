/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMIObjectDetection : NSObject <NSSecureCoding> {

	int _labelIndex;
	double _confidence;
	NSNumber* _yaw;
	NSNumber* _roll;
	CGRect _boundingBox;

}

@property (readonly) int labelIndex;                            //@synthesize labelIndex=_labelIndex - In the implementation block
@property (readonly) double confidence;                         //@synthesize confidence=_confidence - In the implementation block
@property (readonly) NSNumber * yaw;                            //@synthesize yaw=_yaw - In the implementation block
@property (readonly) NSNumber * roll;                           //@synthesize roll=_roll - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(NSNumber *)roll;
-(NSNumber *)yaw;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CGRect)boundingBox;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)labelIndex;
-(id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 unclampedBoundingBox:(CGRect)arg3 yaw:(id)arg4 roll:(id)arg5 ;
-(id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 boundingBox:(CGRect)arg3 yaw:(id)arg4 roll:(id)arg5 ;
@end

