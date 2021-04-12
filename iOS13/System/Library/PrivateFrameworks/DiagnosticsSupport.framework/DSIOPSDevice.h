/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


#import <DiagnosticsSupport/DiagnosticsSupport-Structs.h>
@class NSDictionary;

@interface DSIOPSDevice : NSObject {

	NSDictionary* _info;

}

@property (nonatomic,retain) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(id)deviceWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(NSDictionary *)info;
-(id)serialNumber;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)information;
-(id)initWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
@end

