/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary, NSString, NSArray;

@interface FCCKRecordSchema : NSObject {

	NSDictionary* _fieldSchemasByName;
	NSString* _clientRecordType;
	NSString* _serverRecordType;

}

@property (nonatomic,copy,readonly) NSString * clientRecordType;                     //@synthesize clientRecordType=_clientRecordType - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverRecordType;                     //@synthesize serverRecordType=_serverRecordType - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedFields; 
@property (nonatomic,copy,readonly) NSArray * allEncryptedFieldNames; 
@property (nonatomic,copy,readonly) NSArray * allUnencryptedFieldNames; 
+(id)recordWithClientType:(id)arg1 serverType:(id)arg2 fields:(id)arg3 ;
-(id)init;
-(NSString *)clientRecordType;
-(NSArray *)allEncryptedFieldNames;
-(NSString *)serverRecordType;
-(NSArray *)allUnencryptedFieldNames;
-(BOOL)isFieldKnown:(id)arg1 ;
-(BOOL)isFieldEncrypted:(id)arg1 ;
-(BOOL)hasEncryptedFields;
-(id)initWithClientRecordType:(id)arg1 serverRecordType:(id)arg2 fieldSchemas:(id)arg3 ;
@end

