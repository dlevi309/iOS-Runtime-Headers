/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class MCFileAccessRepairTool, NSDictionary, NSString, NSError;

@interface MCDictionaryWriter : NSObject {

	MCFileAccessRepairTool* _repairTool;
	NSDictionary* _dictionary;
	NSString* _path;
	NSError* _serializeError;
	NSError* _writeError;
	NSError* _beforeWriteRepairError;
	NSError* _afterWriteRepairError;

}

@property (nonatomic,copy) NSError * serializeError;                           //@synthesize serializeError=_serializeError - In the implementation block
@property (nonatomic,copy) NSError * writeError;                               //@synthesize writeError=_writeError - In the implementation block
@property (nonatomic,copy) NSError * beforeWriteRepairError;                   //@synthesize beforeWriteRepairError=_beforeWriteRepairError - In the implementation block
@property (nonatomic,copy) NSError * afterWriteRepairError;                    //@synthesize afterWriteRepairError=_afterWriteRepairError - In the implementation block
@property (nonatomic,retain) MCFileAccessRepairTool * repairTool;              //@synthesize repairTool=_repairTool - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary;                      //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                           //@synthesize path=_path - In the implementation block
-(id)serializedData;
-(BOOL)write;
-(id)createRepairTool;
-(NSError *)serializeError;
-(void)setSerializeError:(NSError *)arg1 ;
-(void)logStartOfWrite;
-(void)serializeDataAndWriteToStorage;
-(void)logResultOfWrite;
-(BOOL)didWriteSucceed;
-(NSError *)afterWriteRepairError;
-(NSError *)beforeWriteRepairError;
-(BOOL)repairAccessIfNecessaryWithError:(id*)arg1 ;
-(void)setBeforeWriteRepairError:(NSError *)arg1 ;
-(void)setWriteError:(NSError *)arg1 ;
-(void)setAfterWriteRepairError:(NSError *)arg1 ;
-(void)setRepairTool:(MCFileAccessRepairTool *)arg1 ;
-(NSString *)path;
-(NSDictionary *)dictionary;
-(void)reset;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 ;
-(NSError *)writeError;
-(MCFileAccessRepairTool *)repairTool;
-(id)initWithDictionary:(id)arg1 path:(id)arg2 ;
@end

