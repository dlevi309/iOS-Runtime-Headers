/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BTCloudDevice : NSObject <NSSecureCoding> {

	NSString* _bluetoothAddress;
	NSString* _manufacturer;
	NSString* _modelNumber;
	NSString* _nickname;
	NSString* _productID;
	NSString* _vendorID;

}

@property (nonatomic,retain) NSString * bluetoothAddress;              //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,retain) NSString * manufacturer;                  //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSString * modelNumber;                   //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,retain) NSString * nickname;                      //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSString * productID;                     //@synthesize productID=_productID - In the implementation block
@property (nonatomic,retain) NSString * vendorID;                      //@synthesize vendorID=_vendorID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deviceWithBluetoothAddress:(id)arg1 ;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(NSString *)bluetoothAddress;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)nickname;
-(id)description;
-(NSString *)productID;
-(void)setNickname:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProductID:(NSString *)arg1 ;
-(NSString *)modelNumber;
-(void)setModelNumber:(NSString *)arg1 ;
-(void)setVendorID:(NSString *)arg1 ;
-(NSString *)vendorID;
-(id)initWithBluetoothAddress:(id)arg1 ;
@end

