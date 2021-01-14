/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, SPHandle, NSString, SPBeaconRole, SPLostModeInfo, NSSet, NSDictionary, NSDate;

@interface SPBeacon : NSObject <NSCopying, NSSecureCoding> {

	BOOL _accepted;
	NSUUID* _identifier;
	SPHandle* _owner;
	NSString* _name;
	NSString* _model;
	SPBeaconRole* _role;
	SPLostModeInfo* _lostModeInfo;
	NSSet* _shares;
	NSDictionary* _taskInformation;
	NSString* _systemVersion;
	long long _vendorId;
	long long _productId;
	unsigned long long _type;
	NSString* _stableIdentifier;
	NSDate* _pairingDate;
	NSString* _correlationIdentifier;

}

@property (nonatomic,copy) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * stableIdentifier;                   //@synthesize stableIdentifier=_stableIdentifier - In the implementation block
@property (nonatomic,copy) SPHandle * owner;                              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) BOOL accepted;                               //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,copy) NSDate * pairingDate;                          //@synthesize pairingDate=_pairingDate - In the implementation block
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) SPBeaconRole * role;                           //@synthesize role=_role - In the implementation block
@property (nonatomic,copy) SPLostModeInfo * lostModeInfo;                 //@synthesize lostModeInfo=_lostModeInfo - In the implementation block
@property (nonatomic,copy) NSSet * shares;                                //@synthesize shares=_shares - In the implementation block
@property (nonatomic,copy) NSDictionary * taskInformation;                //@synthesize taskInformation=_taskInformation - In the implementation block
@property (nonatomic,copy) NSString * correlationIdentifier;              //@synthesize correlationIdentifier=_correlationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                      //@synthesize systemVersion=_systemVersion - In the implementation block
@property (assign,nonatomic) long long vendorId;                          //@synthesize vendorId=_vendorId - In the implementation block
@property (assign,nonatomic) long long productId;                         //@synthesize productId=_productId - In the implementation block
@property (assign,nonatomic) unsigned long long type;                     //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)SPOwner;
-(NSString *)systemVersion;
-(NSString *)model;
-(SPHandle *)owner;
-(NSSet *)shares;
-(void)setVendorId:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRole:(SPBeaconRole *)arg1 ;
-(id)debugDescription;
-(void)setSystemVersion:(NSString *)arg1 ;
-(SPLostModeInfo *)lostModeInfo;
-(void)setType:(unsigned long long)arg1 ;
-(long long)vendorId;
-(NSString *)name;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)correlationIdentifier;
-(void)setAccepted:(BOOL)arg1 ;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(NSString *)stableIdentifier;
-(void)setStableIdentifier:(NSString *)arg1 ;
-(NSDate *)pairingDate;
-(void)setPairingDate:(NSDate *)arg1 ;
-(void)setShares:(NSSet *)arg1 ;
-(void)setLostModeInfo:(SPLostModeInfo *)arg1 ;
-(NSDictionary *)taskInformation;
-(void)setTaskInformation:(NSDictionary *)arg1 ;
-(void)setProductId:(long long)arg1 ;
-(void)setOwner:(SPHandle *)arg1 ;
-(unsigned long long)type;
-(long long)productId;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)accepted;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(SPBeaconRole *)role;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

