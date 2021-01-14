/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BTCloudDeviceSupportInformation : NSObject <NSSecureCoding> {

	NSString* _bluetoothAddress;
	NSString* _budsFirmwareVersion;
	NSString* _caseName;
	NSString* _caseFirmwareVersion;
	NSString* _caseSerialNumber;
	NSString* _hardwareVersion;
	NSString* _leftBudSerialNumber;
	NSString* _rightBudSerialNumber;
	NSString* _ancAssetVersion;

}

@property (nonatomic,retain) NSString * bluetoothAddress;                  //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,retain) NSString * budsFirmwareVersion;               //@synthesize budsFirmwareVersion=_budsFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * caseName;                          //@synthesize caseName=_caseName - In the implementation block
@property (nonatomic,retain) NSString * caseFirmwareVersion;               //@synthesize caseFirmwareVersion=_caseFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * caseSerialNumber;                  //@synthesize caseSerialNumber=_caseSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * hardwareVersion;                   //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * leftBudSerialNumber;               //@synthesize leftBudSerialNumber=_leftBudSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * rightBudSerialNumber;              //@synthesize rightBudSerialNumber=_rightBudSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * ancAssetVersion;                   //@synthesize ancAssetVersion=_ancAssetVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deviceSupportInformationWithBluetoothAddress:(id)arg1 ;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(NSString *)bluetoothAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hardwareVersion;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(id)initWithBluetoothAddress:(id)arg1 ;
-(NSString *)ancAssetVersion;
-(NSString *)budsFirmwareVersion;
-(NSString *)caseName;
-(NSString *)caseFirmwareVersion;
-(NSString *)caseSerialNumber;
-(NSString *)leftBudSerialNumber;
-(NSString *)rightBudSerialNumber;
-(void)setAncAssetVersion:(NSString *)arg1 ;
-(void)setBudsFirmwareVersion:(NSString *)arg1 ;
-(void)setCaseName:(NSString *)arg1 ;
-(void)setCaseFirmwareVersion:(NSString *)arg1 ;
-(void)setCaseSerialNumber:(NSString *)arg1 ;
-(void)setLeftBudSerialNumber:(NSString *)arg1 ;
-(void)setRightBudSerialNumber:(NSString *)arg1 ;
@end

