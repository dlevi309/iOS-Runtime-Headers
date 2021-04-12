/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSDate, NSData;

@interface WFRealmCloudKitSyncToken : RLMObject <WFRecordStorage> {

	NSString* _identifier;
	NSString* _account;
	NSDate* _date;
	NSData* _serverChangeTokenData;
	NSData* _lastOrderingData;
	NSData* _lastOrderingCloudKitRecordMetadata;
	NSData* _syncEngineMetadata;
	NSData* _syncFlagsCloudKitRecordMetadata;

}

@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * account;                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSData * serverChangeTokenData;                           //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (nonatomic,copy) NSData * lastOrderingData;                                //@synthesize lastOrderingData=_lastOrderingData - In the implementation block
@property (nonatomic,copy) NSData * lastOrderingCloudKitRecordMetadata;              //@synthesize lastOrderingCloudKitRecordMetadata=_lastOrderingCloudKitRecordMetadata - In the implementation block
@property (nonatomic,copy) NSData * syncEngineMetadata;                              //@synthesize syncEngineMetadata=_syncEngineMetadata - In the implementation block
@property (nonatomic,copy) NSData * syncFlagsCloudKitRecordMetadata;                 //@synthesize syncFlagsCloudKitRecordMetadata=_syncFlagsCloudKitRecordMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)primaryKey;
+(id)className;
+(id)defaultPropertyValues;
+(id)requiredProperties;
+(id)syncTokenInRealm:(id)arg1 ;
+(void)setSyncToken:(id)arg1 inRealm:(id)arg2 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)descriptor;
-(NSData *)syncEngineMetadata;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(NSData *)serverChangeTokenData;
-(void)setSyncEngineMetadata:(NSData *)arg1 ;
-(void)setSyncFlagsCloudKitRecordMetadata:(NSData *)arg1 ;
-(NSData *)syncFlagsCloudKitRecordMetadata;
-(NSData *)lastOrderingData;
-(void)setLastOrderingData:(NSData *)arg1 ;
-(NSData *)lastOrderingCloudKitRecordMetadata;
-(void)setLastOrderingCloudKitRecordMetadata:(NSData *)arg1 ;
@end

