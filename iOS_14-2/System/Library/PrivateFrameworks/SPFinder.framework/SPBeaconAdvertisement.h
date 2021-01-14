/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate, SPEstimatedLocation, NSUUID;

@interface SPBeaconAdvertisement : NSObject <NSSecureCoding> {

	unsigned char _rawStatus;
	NSData* _address;
	NSData* _publicKey;
	NSData* _deviceType;
	NSData* _batteryState;
	long long _rssi;
	NSDate* _scanDate;
	SPEstimatedLocation* _location;
	NSUUID* _recordIdentifier;

}

@property (nonatomic,copy) NSData * address;                            //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSData * publicKey;                          //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy) NSData * deviceType;                         //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSData * batteryState;                       //@synthesize batteryState=_batteryState - In the implementation block
@property (nonatomic,copy) NSDate * scanDate;                           //@synthesize scanDate=_scanDate - In the implementation block
@property (nonatomic,copy) NSUUID * recordIdentifier;                   //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char rawStatus;                   //@synthesize rawStatus=_rawStatus - In the implementation block
@property (assign,nonatomic) long long rssi;                            //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy) SPEstimatedLocation * location;              //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)publicKey;
-(NSData *)deviceType;
-(NSUUID *)recordIdentifier;
-(void)setRssi:(long long)arg1 ;
-(void)setPublicKey:(NSData *)arg1 ;
-(void)setDeviceType:(NSData *)arg1 ;
-(SPEstimatedLocation *)location;
-(long long)rssi;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)batteryState;
-(void)setLocation:(SPEstimatedLocation *)arg1 ;
-(void)setBatteryState:(NSData *)arg1 ;
-(NSData *)address;
-(void)setAddress:(NSData *)arg1 ;
-(NSDate *)scanDate;
-(void)setScanDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRecordIdentifier:(NSUUID *)arg1 ;
-(void)setRawStatus:(unsigned char)arg1 ;
-(unsigned char)rawStatus;
-(id)initWithAddress:(id)arg1 publicKey:(id)arg2 deviceType:(id)arg3 batteryState:(id)arg4 rawStatus:(unsigned char)arg5 rssi:(long long)arg6 scanDate:(id)arg7 recordIdentifier:(id)arg8 ;
@end

