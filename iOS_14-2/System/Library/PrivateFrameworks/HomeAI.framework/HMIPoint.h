/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMIPoint : HMFObject <NSSecureCoding> {

	CGPoint _point;

}

@property (readonly) CGPoint point;              //@synthesize point=_point - In the implementation block
@property (readonly) double x; 
@property (readonly) double y; 
+(BOOL)supportsSecureCoding;
-(double)x;
-(CGPoint)point;
-(double)y;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPoint:(CGPoint)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

