/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _powerOn;
	BOOL _isDiscoverable;
	BOOL _isConnectable;
	BOOL _isScanning;
	NSString* _address;
	NSArray* _devices;

}

@property (assign,nonatomic) BOOL powerOn;                     //@synthesize powerOn=_powerOn - In the implementation block
@property (nonatomic,copy) NSString * address;                 //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL isDiscoverable;              //@synthesize isDiscoverable=_isDiscoverable - In the implementation block
@property (assign,nonatomic) BOOL isConnectable;               //@synthesize isConnectable=_isConnectable - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                  //@synthesize isScanning=_isScanning - In the implementation block
@property (nonatomic,copy) NSArray * devices;                  //@synthesize devices=_devices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(NSArray *)devices;
-(void)setAddress:(NSString *)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(BOOL)isDiscoverable;
-(void)setIsScanning:(BOOL)arg1 ;
-(BOOL)isScanning;
-(BOOL)isConnectable;
-(BOOL)powerOn;
-(void)setPowerOn:(BOOL)arg1 ;
-(BOOL)isEqualToBluetoothStatus:(id)arg1 ;
-(void)setIsDiscoverable:(BOOL)arg1 ;
-(void)setIsConnectable:(BOOL)arg1 ;
@end

