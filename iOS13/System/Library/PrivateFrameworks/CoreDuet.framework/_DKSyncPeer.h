/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)me;
-(NSString *)sourceDeviceID;
-(id)initWithZoneName:(id)arg1 ;
-(NSDate *)lastSeenDate;
-(NSString *)zoneName;
-(void)setMe:(BOOL)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setSourceDeviceID:(NSString *)arg1 ;
-(void)setIdsDeviceIdentifier:(NSString *)arg1 ;
-(void)setLastSeenDate:(NSDate *)arg1 ;
-(NSString *)idsDeviceIdentifier;
-(id)initWithIDSDeviceIdentifier:(id)arg1 zoneName:(id)arg2 ;
-(id)initWithIDSDeviceIdentifier:(id)arg1 ;
-(NSUUID *)sourceDeviceUUID;
-(BOOL)isCompanion;
-(void)setCompanion:(BOOL)arg1 ;
@end

