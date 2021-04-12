/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)applicationsJSONTransformer;
-(void)setSequenceNumber:(NSNumber *)arg1 ;
-(NSNumber *)sequenceNumber;
-(NSDictionary *)applications;
-(void)setApplications:(NSDictionary *)arg1 ;
-(NSUUID *)databaseUUID;
-(void)setDatabaseUUID:(NSUUID *)arg1 ;
@end

