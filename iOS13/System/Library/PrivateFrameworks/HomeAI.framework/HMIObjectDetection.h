/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMIObjectDetection : NSObject <NSSecureCoding> {

	int _labelIndex;
	double _confidence;
	CGRect _boundingBox;

}

@property (readonly) int labelIndex;                            //@synthesize labelIndex=_labelIndex - In the implementation block
@property (readonly) double confidence;                         //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidence;
-(CGRect)boundingBox;
-(int)labelIndex;
-(id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 unclampedBoundingBox:(CGRect)arg3 ;
-(id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 boundingBox:(CGRect)arg3 ;
@end

