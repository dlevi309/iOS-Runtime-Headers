/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSData, CBPeripheral;

@interface HKHealthService : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSUUID* _identifier;
	NSString* _name;
	double _lastConnection;
	NSString* _serviceId;
	NSData* _advertisementData;
	CBPeripheral* _peripheral;

}

@property (assign,nonatomic) double lastConnection;                   //@synthesize lastConnection=_lastConnection - In the implementation block
@property (nonatomic,copy) NSString * serviceId;                      //@synthesize serviceId=_serviceId - In the implementation block
@property (nonatomic,retain) NSData * advertisementData;              //@synthesize advertisementData=_advertisementData - In the implementation block
@property (nonatomic,retain) CBPeripheral * peripheral;               //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)serviceId;
-(double)lastConnection;
-(void)setLastConnection:(double)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id)_initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 serviceId:(id)arg4 ;
-(id)_localizedHealthServiceType;
-(id)initUnknownServiceWithIdentifier:(id)arg1 name:(id)arg2 serviceId:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setAdvertisementData:(NSData *)arg1 ;
-(long long)type;
-(CBPeripheral *)peripheral;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setServiceId:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(NSData *)advertisementData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

