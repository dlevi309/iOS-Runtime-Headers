/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


#import <DiagnosticsSupport/DiagnosticsSupport-Structs.h>
@class NSDictionary;

@interface DSIOPSDevice : NSObject {

	NSDictionary* _info;

}

@property (nonatomic,retain) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(id)deviceWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(id)serialNumber;
-(id)initWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(NSDictionary *)info;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)information;
@end

