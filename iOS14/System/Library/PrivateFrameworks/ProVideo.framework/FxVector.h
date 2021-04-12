/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxVector : NSObject {

	unsigned long long _count;
	SCD_Union_Fx95* _u;

}
+(id)vectorWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 ;
+(id)vectorWithX:(double)arg1 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
+(id)vectorWithString:(id)arg1 ;
+(id)vectorWithCIVector:(id)arg1 ;
-(double)Y;
-(double)Z;
-(double)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)stringRepresentation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 ;
-(unsigned long long)count;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
-(double)W;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
-(id)initWithX:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(double)X;
-(id)initWithCIVector:(id)arg1 ;
-(id)ciVector;
@end

