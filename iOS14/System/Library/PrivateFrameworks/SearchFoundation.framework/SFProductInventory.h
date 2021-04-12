/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFProductInventory.h>
@class NSString, NSNumber, NSDate, NSDictionary, NSData;


@protocol SFProductInventory <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSString * storeId; 
@property (assign,nonatomic) int availabilityStatus; 
@property (nonatomic,copy) NSNumber * distance; 
@property (assign,nonatomic) int distanceUnit; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeAddress; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setDistance:(id)arg1;
-(NSString *)storeName;
-(NSString *)storeId;
-(NSNumber *)distance;
-(NSDate *)timestamp;
-(NSData *)jsonData;
-(void)setType:(int)arg1;
-(void)setStoreId:(id)arg1;
-(void)setAvailabilityStatus:(int)arg1;
-(void)setDistanceUnit:(int)arg1;
-(void)setStoreAddress:(id)arg1;
-(int)availabilityStatus;
-(int)distanceUnit;
-(NSString *)storeAddress;
-(int)type;
-(void)setStoreName:(id)arg1;
-(void)setTimestamp:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDate, NSDictionary, NSData;

@interface SFProductInventory : NSObject <SFProductInventory, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	int _type;
	int _availabilityStatus;
	int _distanceUnit;
	NSString* _storeId;
	NSNumber* _distance;
	NSDate* _timestamp;
	NSString* _storeName;
	NSString* _storeAddress;

}

@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * storeId;                                       //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) int availabilityStatus;                                 //@synthesize availabilityStatus=_availabilityStatus - In the implementation block
@property (nonatomic,copy) NSNumber * distance;                                      //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) int distanceUnit;                                       //@synthesize distanceUnit=_distanceUnit - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * storeName;                                     //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,copy) NSString * storeAddress;                                  //@synthesize storeAddress=_storeAddress - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setDistance:(NSNumber *)arg1 ;
-(NSString *)storeName;
-(NSString *)storeId;
-(NSNumber *)distance;
-(NSDate *)timestamp;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasType;
-(void)setType:(int)arg1 ;
-(void)setStoreId:(NSString *)arg1 ;
-(void)setAvailabilityStatus:(int)arg1 ;
-(void)setDistanceUnit:(int)arg1 ;
-(void)setStoreAddress:(NSString *)arg1 ;
-(int)availabilityStatus;
-(int)distanceUnit;
-(NSString *)storeAddress;
-(BOOL)hasAvailabilityStatus;
-(BOOL)hasDistanceUnit;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setStoreName:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

