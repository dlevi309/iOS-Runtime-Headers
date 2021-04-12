/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@interface EspressoBufferHandle : NSObject {

	SCD_Struct_Es3* _espressoBuffer;

}

@property (assign) SCD_Struct_Es3* espressoBuffer;              //@synthesize espressoBuffer=_espressoBuffer - In the implementation block
+(id)createBuffer;
-(SCD_Struct_Es3*)espressoBuffer;
-(void)setEspressoBuffer:(SCD_Struct_Es3*)arg1 ;
@end

