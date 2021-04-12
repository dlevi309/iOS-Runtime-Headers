/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUIHashBuilder : NSObject {

	unsigned long long _hash;

}
+(id)builder;
-(id)init;
-(void)appendCGRect:(CGRect)arg1 ;
-(void)appendDouble:(double)arg1 ;
-(unsigned long long)hash;
-(void)appendObject:(id)arg1 ;
-(void)appendBool:(BOOL)arg1 ;
-(void)appendCGFloat:(double)arg1 ;
-(void)appendFloat:(float)arg1 ;
-(void)appendFloat2:;
-(unsigned long long)hashForFloat:(float)arg1 ;
-(unsigned long long)hashForCGFloat:(double)arg1 ;
-(unsigned long long)hashForNSTimeInterval:(double)arg1 ;
-(unsigned long long)hashForDouble:(double)arg1 ;
-(void)appendFloat4:;
-(void)appendUnsignedInt:(unsigned long long)arg1 ;
-(void)appendInt:(long long)arg1 ;
-(void)appendTimeInterval:(double)arg1 ;
-(void)appendFloat4x4:(SCD_Struct_AR2)arg1 ;
@end

