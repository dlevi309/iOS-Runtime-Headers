/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxVector : NSObject {

	unsigned long long _count;
	SCD_Union_Fx91* _u;

}
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 ;
+(id)vectorWithX:(double)arg1 ;
+(id)vectorWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
+(id)vectorWithString:(id)arg1 ;
+(id)vectorWithCIVector:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(double)X;
-(double)Y;
-(double)Z;
-(double)W;
-(id)stringRepresentation;
-(double)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithX:(double)arg1 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
-(id)initWithCIVector:(id)arg1 ;
-(id)ciVector;
@end

