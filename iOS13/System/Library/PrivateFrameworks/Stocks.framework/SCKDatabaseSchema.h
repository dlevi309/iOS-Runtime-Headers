/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(long long)environment;
-(CKContainerID *)containerID;
-(NSArray *)zoneIDs;
-(NSArray *)zoneSchemas;
-(long long)security;
-(id)initWithName:(id)arg1 environment:(long long)arg2 security:(long long)arg3 zoneSchemas:(id)arg4 ;
-(BOOL)requiresDeviceToDeviceEncryption;
-(id)schemaForZoneName:(id)arg1 ;
-(void)setZoneSchemas:(NSArray *)arg1 ;
-(void)setSecurity:(long long)arg1 ;
@end

