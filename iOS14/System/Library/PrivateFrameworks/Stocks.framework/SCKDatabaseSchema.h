/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSString, NSArray, CKContainerID;

@interface SCKDatabaseSchema : NSObject {

	NSString* _name;
	long long _environment;
	NSArray* _zoneSchemas;
	long long _security;

}

@property (assign,nonatomic) long long security;                                   //@synthesize security=_security - In the implementation block
@property (nonatomic,copy) NSArray * zoneSchemas;                                  //@synthesize zoneSchemas=_zoneSchemas - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long environment;                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) CKContainerID * containerID; 
@property (nonatomic,copy,readonly) NSArray * zoneIDs; 
@property (nonatomic,readonly) BOOL requiresDeviceToDeviceEncryption; 
-(NSArray *)zoneIDs;
-(long long)security;
-(CKContainerID *)containerID;
-(void)setZoneSchemas:(NSArray *)arg1 ;
-(id)schemaForZoneName:(id)arg1 ;
-(BOOL)requiresDeviceToDeviceEncryption;
-(NSString *)name;
-(id)initWithName:(id)arg1 environment:(long long)arg2 security:(long long)arg3 zoneSchemas:(id)arg4 ;
-(long long)environment;
-(void)setSecurity:(long long)arg1 ;
-(NSArray *)zoneSchemas;
@end

