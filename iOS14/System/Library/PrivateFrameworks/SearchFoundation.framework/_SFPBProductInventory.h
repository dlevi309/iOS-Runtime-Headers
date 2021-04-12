/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBProductInventory.h>
@class NSString, _SFPBDate, NSData;


@protocol _SFPBProductInventory <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSString * storeId; 
@property (assign,nonatomic) int availabilityStatus; 
@property (assign,nonatomic) float distance; 
@property (assign,nonatomic) int distanceUnit; 
@property (nonatomic,retain) _SFPBDate * timestamp; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeAddress; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setDistance:(float)arg1;
-(NSString *)storeName;
-(NSString *)storeId;
-(float)distance;
-(_SFPBDate *)timestamp;
-(NSData *)jsonData;
-(void)setType:(int)arg1;
-(id)initWithDictionary:(id)arg1;
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
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBDate, NSData;

@interface _SFPBProductInventory : PBCodable <_SFPBProductInventory, NSSecureCoding> {

	int _type;
	int _availabilityStatus;
	float _distance;
	int _distanceUnit;
	NSString* _storeId;
	_SFPBDate* _timestamp;
	NSString* _storeName;
	NSString* _storeAddress;

}

@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * storeId;                      //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) int availabilityStatus;                //@synthesize availabilityStatus=_availabilityStatus - In the implementation block
@property (assign,nonatomic) float distance;                        //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) int distanceUnit;                      //@synthesize distanceUnit=_distanceUnit - In the implementation block
@property (nonatomic,retain) _SFPBDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * storeName;                    //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,copy) NSString * storeAddress;                 //@synthesize storeAddress=_storeAddress - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setDistance:(float)arg1 ;
-(NSString *)storeName;
-(NSString *)storeId;
-(float)distance;
-(id)initWithFacade:(id)arg1 ;
-(_SFPBDate *)timestamp;
-(NSData *)jsonData;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setStoreId:(NSString *)arg1 ;
-(void)setAvailabilityStatus:(int)arg1 ;
-(void)setDistanceUnit:(int)arg1 ;
-(void)setStoreAddress:(NSString *)arg1 ;
-(int)availabilityStatus;
-(int)distanceUnit;
-(NSString *)storeAddress;
-(int)type;
-(unsigned long long)hash;
-(void)setStoreName:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(_SFPBDate *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

