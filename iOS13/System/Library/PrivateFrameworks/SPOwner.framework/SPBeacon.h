/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)SPOwner;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SPBeaconRole *)role;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setOwner:(SPHandle *)arg1 ;
-(NSString *)systemVersion;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(SPHandle *)owner;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(void)setRole:(SPBeaconRole *)arg1 ;
-(long long)vendorId;
-(void)setVendorId:(long long)arg1 ;
-(NSString *)correlationIdentifier;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(long long)productId;
-(void)setProductId:(long long)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(SPLostModeInfo *)lostModeInfo;
-(BOOL)accepted;
-(void)setAccepted:(BOOL)arg1 ;
-(NSString *)stableIdentifier;
-(void)setStableIdentifier:(NSString *)arg1 ;
-(NSDate *)pairingDate;
-(void)setPairingDate:(NSDate *)arg1 ;
-(void)setLostModeInfo:(SPLostModeInfo *)arg1 ;
-(NSSet *)shares;
-(void)setShares:(NSSet *)arg1 ;
-(NSDictionary *)taskInformation;
-(void)setTaskInformation:(NSDictionary *)arg1 ;
@end

