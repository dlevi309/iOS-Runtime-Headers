/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)type;
-(void)setType:(int)arg1;
-(void)setStoreName:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSDate *)timestamp;
-(void)setTimestamp:(id)arg1;
-(void)setDistance:(id)arg1;
-(NSNumber *)distance;
-(NSString *)storeName;
-(NSData *)jsonData;
-(void)setStoreId:(id)arg1;
-(void)setAvailabilityStatus:(int)arg1;
-(void)setDistanceUnit:(int)arg1;
-(void)setStoreAddress:(id)arg1;
-(NSString *)storeId;
-(int)availabilityStatus;
-(int)distanceUnit;
-(NSString *)storeAddress;

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setStoreName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setDistance:(NSNumber *)arg1 ;
-(NSNumber *)distance;
-(NSString *)storeName;
-(BOOL)hasType;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setStoreId:(NSString *)arg1 ;
-(void)setAvailabilityStatus:(int)arg1 ;
-(void)setDistanceUnit:(int)arg1 ;
-(void)setStoreAddress:(NSString *)arg1 ;
-(NSString *)storeId;
-(int)availabilityStatus;
-(int)distanceUnit;
-(NSString *)storeAddress;
-(BOOL)hasAvailabilityStatus;
-(BOOL)hasDistanceUnit;
@end

