/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSUUID, NSNumber, NSDictionary, NSString;

@interface VCIntentDefinitionSyncState : MTLModel <MTLJSONSerializing> {

	NSUUID* _databaseUUID;
	NSNumber* _sequenceNumber;
	NSDictionary* _applications;

}

@property (nonatomic,copy) NSUUID * databaseUUID;                                //@synthesize databaseUUID=_databaseUUID - In the implementation block
@property (nonatomic,copy) NSNumber * sequenceNumber;                            //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * applications;                          //@synthesize applications=_applications - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)applicationsJSONTransformer;
-(void)setSequenceNumber:(NSNumber *)arg1 ;
-(void)setApplications:(NSDictionary *)arg1 ;
-(NSNumber *)sequenceNumber;
-(NSDictionary *)applications;
-(void)setDatabaseUUID:(NSUUID *)arg1 ;
-(NSUUID *)databaseUUID;
@end

