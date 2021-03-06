/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary;

@interface WPAdvertisingRequest : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _clientType;
	BOOL _connectable;
	BOOL _isRanging;
	BOOL _stopOnAdvertisingAddressChange;
	BOOL _holdVoucher;
	NSData* _advertisingData;
	long long _advertisingRate;
	long long _priorityValue;
	double _updateTime;
	NSDictionary* _advertisingOptions;

}

@property (assign,nonatomic) unsigned char clientType;               //@synthesize clientType=_clientType - In the implementation block
@property (assign) long long priorityValue;                          //@synthesize priorityValue=_priorityValue - In the implementation block
@property (nonatomic,retain) NSData * advertisingData;               //@synthesize advertisingData=_advertisingData - In the implementation block
@property (assign) long long advertisingRate;                        //@synthesize advertisingRate=_advertisingRate - In the implementation block
@property (assign) double updateTime;                                //@synthesize updateTime=_updateTime - In the implementation block
@property (assign) BOOL connectable;                                 //@synthesize connectable=_connectable - In the implementation block
@property (retain) NSDictionary * advertisingOptions;                //@synthesize advertisingOptions=_advertisingOptions - In the implementation block
@property (assign) BOOL isRanging;                                   //@synthesize isRanging=_isRanging - In the implementation block
@property (assign) BOOL stopOnAdvertisingAddressChange;              //@synthesize stopOnAdvertisingAddressChange=_stopOnAdvertisingAddressChange - In the implementation block
@property (assign) BOOL holdVoucher;                                 //@synthesize holdVoucher=_holdVoucher - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestForClientType:(unsigned char)arg1 ;
-(double)updateTime;
-(BOOL)isRanging;
-(long long)compare:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setUpdateTime:(double)arg1 ;
-(void)setIsRanging:(BOOL)arg1 ;
-(void)setClientType:(unsigned char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)clientType;
-(void)setConnectable:(BOOL)arg1 ;
-(BOOL)connectable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAdvertisingRate:(long long)arg1 ;
-(void)setAdvertisingData:(NSData *)arg1 ;
-(NSData *)advertisingData;
-(long long)advertisingRate;
-(long long)priorityValue;
-(void)setPriorityValue:(long long)arg1 ;
-(NSDictionary *)advertisingOptions;
-(void)setAdvertisingOptions:(NSDictionary *)arg1 ;
-(BOOL)stopOnAdvertisingAddressChange;
-(void)setStopOnAdvertisingAddressChange:(BOOL)arg1 ;
-(BOOL)holdVoucher;
-(void)setHoldVoucher:(BOOL)arg1 ;
-(void)changePriorityValue:(long long)arg1 ;
@end

