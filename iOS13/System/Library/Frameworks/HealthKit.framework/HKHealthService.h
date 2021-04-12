/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSData *)advertisementData;
-(void)setAdvertisementData:(NSData *)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(double)lastConnection;
-(NSString *)serviceId;
-(id)_initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 serviceId:(id)arg4 ;
-(id)_localizedHealthServiceType;
-(id)initUnknownServiceWithIdentifier:(id)arg1 name:(id)arg2 serviceId:(id)arg3 ;
-(void)setLastConnection:(double)arg1 ;
-(void)setServiceId:(NSString *)arg1 ;
-(CBPeripheral *)peripheral;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
@end

