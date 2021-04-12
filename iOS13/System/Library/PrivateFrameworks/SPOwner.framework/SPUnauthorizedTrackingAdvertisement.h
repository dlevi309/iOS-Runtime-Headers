/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface SPUnauthorizedTrackingAdvertisement : NSObject <NSSecureCoding> {

	unsigned char _status;
	NSData* _advertisementData;
	NSData* _reserved;
	long long _rssi;
	NSDate* _scanDate;
	NSData* _data;
	NSData* __address;

}

@property (nonatomic,copy) NSData * _address;                       //@synthesize _address=__address - In the implementation block
@property (assign,nonatomic) long long rssi;                        //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy) NSData * advertisementData;              //@synthesize advertisementData=_advertisementData - In the implementation block
@property (assign,nonatomic) unsigned char status;                  //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSData * reserved;                       //@synthesize reserved=_reserved - In the implementation block
@property (nonatomic,copy) NSDate * scanDate;                       //@synthesize scanDate=_scanDate - In the implementation block
@property (nonatomic,copy,readonly) NSData * address; 
@property (nonatomic,copy) NSData * data;                           //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)reserved;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSData *)address;
-(unsigned char)status;
-(void)setStatus:(unsigned char)arg1 ;
-(NSData *)_address;
-(long long)rssi;
-(void)setReserved:(NSData *)arg1 ;
-(void)setRssi:(long long)arg1 ;
-(NSData *)advertisementData;
-(void)setAdvertisementData:(NSData *)arg1 ;
-(id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6 ;
-(void)set_address:(NSData *)arg1 ;
-(void)setScanDate:(NSDate *)arg1 ;
-(NSDate *)scanDate;
-(id)initWithAddress:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 scanDate:(id)arg4 ;
@end

