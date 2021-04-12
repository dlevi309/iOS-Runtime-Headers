/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSData, NSDate, NSString;

@interface TASPAdvertisement : NSObject <OSLogCoding, TAEventProtocol> {

	unsigned char _status;
	NSData* _address;
	NSData* _advertisementData;
	NSData* _reserved;
	long long _rssi;
	NSDate* _scanDate;

}

@property (nonatomic,copy,readonly) NSData * address;                        //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSData * advertisementData;              //@synthesize advertisementData=_advertisementData - In the implementation block
@property (nonatomic,readonly) unsigned char status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSData * reserved;                       //@synthesize reserved=_reserved - In the implementation block
@property (nonatomic,readonly) long long rssi;                               //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy,readonly) NSDate * scanDate;                       //@synthesize scanDate=_scanDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionDictionary;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(long long)rssi;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)reserved;
-(unsigned long long)getType;
-(NSString *)description;
-(NSData *)address;
-(id)getDate;
-(NSDate *)scanDate;
-(id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)advertisementData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)status;
@end

