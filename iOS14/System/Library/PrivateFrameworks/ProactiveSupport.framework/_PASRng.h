/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASRng : NSObject {

	SCD_Struct_PA9 _state;

}
-(unsigned long long)next;
-(id)init;
-(float)nextFloat;
-(double)nextDouble;
-(id)initWithSeed:(unsigned long long)arg1 ;
@end

