/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUBluetoothFindDeviceRequest : NSObject {

	SCD_Struct_CU6 _address;
	/*^block*/id _completion;

}

@property (assign,nonatomic) SCD_Struct_CU6 address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) id completion;                         //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(SCD_Struct_CU6)address;
-(void)setAddress:(SCD_Struct_CU6)arg1 ;
@end

