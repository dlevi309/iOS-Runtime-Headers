/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString, NSDate, NSUUID;

@interface _DKSyncPeer : NSObject {

	BOOL _companion;
	BOOL _me;
	NSString* _sourceDeviceID;
	NSString* _idsDeviceIdentifier;
	NSString* _zoneName;
	NSDate* _lastSeenDate;
	NSString* _name;
	NSString* _model;
	NSString* _version;
	NSUUID* _uuid;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * sourceDeviceID;                        //@synthesize sourceDeviceID=_sourceDeviceID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sourceDeviceUUID; 
@property (nonatomic,copy) NSString * idsDeviceIdentifier;                   //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * zoneName;                              //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,copy) NSDate * lastSeenDate;                            //@synthesize lastSeenDate=_lastSeenDate - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,getter=isCompanion,nonatomic) BOOL companion;              //@synthesize companion=_companion - In the implementation block
@property (nonatomic,copy) NSString * version;                               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL me;                                        //@synthesize me=_me - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
-(BOOL)me;
-(BOOL)isCompanion;
-(NSString *)model;
-(NSUUID *)uuid;
-(id)init;
-(void)setIdsDeviceIdentifier:(NSString *)arg1 ;
-(void)setMe:(BOOL)arg1 ;
-(NSString *)zoneName;
-(void)setSourceDeviceID:(NSString *)arg1 ;
-(void)setLastSeenDate:(NSDate *)arg1 ;
-(id)initWithIDSDeviceIdentifier:(id)arg1 zoneName:(id)arg2 ;
-(void)setCompanion:(BOOL)arg1 ;
-(id)initWithIDSDeviceIdentifier:(id)arg1 ;
-(NSString *)name;
-(NSString *)idsDeviceIdentifier;
-(NSString *)sourceDeviceID;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(id)initWithZoneName:(id)arg1 ;
-(NSDate *)lastSeenDate;
-(NSUUID *)sourceDeviceUUID;
-(void)setName:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(NSString *)version;
@end

