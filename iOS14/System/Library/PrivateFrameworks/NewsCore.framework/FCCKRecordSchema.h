/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)clientRecordType;
-(id)init;
-(NSArray *)allEncryptedFieldNames;
-(BOOL)hasEncryptedFields;
-(id)initWithClientRecordType:(id)arg1 serverRecordType:(id)arg2 fieldSchemas:(id)arg3 ;
-(NSString *)serverRecordType;
-(BOOL)isFieldKnown:(id)arg1 ;
-(NSArray *)allUnencryptedFieldNames;
-(BOOL)isFieldEncrypted:(id)arg1 ;
@end

