/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUBluetoothFindDeviceRequest : NSObject {

	SCD_Struct_CU3 _address;
	/*^block*/id _completion;

}

@property (assign,nonatomic) SCD_Struct_CU3 address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) id completion;                         //@synthesize completion=_completion - In the implementation block
-(SCD_Struct_CU3)address;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setAddress:(SCD_Struct_CU3)arg1 ;
@end

