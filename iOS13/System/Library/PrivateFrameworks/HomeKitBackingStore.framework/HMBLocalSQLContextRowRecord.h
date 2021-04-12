/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSData, NSUUID, NSString;

@interface HMBLocalSQLContextRowRecord : HMFObject {

	unsigned long long _recordRow;
	NSData* _externalData;
	NSData* _externalID;
	NSUUID* _modelID;
	unsigned long long _modelEncoding;
	NSData* _modelData;
	NSUUID* _modelSchema;
	unsigned long long _pushEncoding;
	NSData* _pushData;
	unsigned long long _pushBlockRow;
	NSString* _modelType;

}

@property (nonatomic,readonly) unsigned long long recordRow;                  //@synthesize recordRow=_recordRow - In the implementation block
@property (nonatomic,readonly) NSData * externalData;                         //@synthesize externalData=_externalData - In the implementation block
@property (nonatomic,readonly) NSData * externalID;                           //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) unsigned long long modelEncoding;              //@synthesize modelEncoding=_modelEncoding - In the implementation block
@property (nonatomic,readonly) NSUUID * modelID;                              //@synthesize modelID=_modelID - In the implementation block
@property (nonatomic,readonly) NSData * modelData;                            //@synthesize modelData=_modelData - In the implementation block
@property (nonatomic,readonly) NSUUID * modelSchema;                          //@synthesize modelSchema=_modelSchema - In the implementation block
@property (nonatomic,readonly) NSString * modelType;                          //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,readonly) unsigned long long pushEncoding;               //@synthesize pushEncoding=_pushEncoding - In the implementation block
@property (nonatomic,readonly) NSData * pushData;                             //@synthesize pushData=_pushData - In the implementation block
@property (nonatomic,readonly) unsigned long long pushBlockRow;               //@synthesize pushBlockRow=_pushBlockRow - In the implementation block
-(NSString *)modelType;
-(id)attributeDescriptions;
-(NSData *)externalID;
-(NSUUID *)modelID;
-(NSData *)externalData;
-(NSData *)modelData;
-(unsigned long long)modelEncoding;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 returning:(unsigned long long)arg2 ;
-(unsigned long long)recordRow;
-(NSUUID *)modelSchema;
-(unsigned long long)pushEncoding;
-(NSData *)pushData;
-(id)initWithRecordRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelID:(id)arg4 modelEncoding:(unsigned long long)arg5 modelData:(id)arg6 modelSchema:(id)arg7 modelType:(id)arg8 pushEncoding:(unsigned long long)arg9 pushData:(id)arg10 pushBlockRow:(unsigned long long)arg11 ;
-(unsigned long long)pushBlockRow;
@end

