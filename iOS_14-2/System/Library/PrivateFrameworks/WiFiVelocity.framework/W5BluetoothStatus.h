/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _powerOn;
	BOOL _isDiscoverable;
	BOOL _isConnectable;
	BOOL _isScanning;
	NSString* _address;
	NSArray* _devices;

}

@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (assign,nonatomic) BOOL powerOn;                             //@synthesize powerOn=_powerOn - In the implementation block
@property (nonatomic,copy) NSString * address;                         //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL isDiscoverable;                      //@synthesize isDiscoverable=_isDiscoverable - In the implementation block
@property (assign,nonatomic) BOOL isConnectable;                       //@synthesize isConnectable=_isConnectable - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                          //@synthesize isScanning=_isScanning - In the implementation block
@property (nonatomic,copy) NSArray * devices;                          //@synthesize devices=_devices - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionary;
-(BOOL)isDiscoverable;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(BOOL)powerOn;
-(BOOL)isScanning;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsScanning:(BOOL)arg1 ;
-(id)description;
-(BOOL)isConnectable;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setPowerOn:(BOOL)arg1 ;
-(BOOL)isEqualToBluetoothStatus:(id)arg1 ;
-(void)setIsDiscoverable:(BOOL)arg1 ;
-(void)setIsConnectable:(BOOL)arg1 ;
@end

