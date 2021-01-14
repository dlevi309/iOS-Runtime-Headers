/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSString, _DPStorage;

@interface _DPToolCommand : NSObject {

	BOOL _writeOK;
	NSString* _action;
	NSString* _arguments;
	NSString* _metadata;
	NSString* _recordKey;
	NSString* _databasePath;
	_DPStorage* _storage;

}

@property (nonatomic,readonly) _DPStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * arguments;                 //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordKey;                 //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) BOOL writeOK;                              //@synthesize writeOK=_writeOK - In the implementation block
+(id)supportedCommands;
+(id)supportedMetadataKeys;
+(id)command:(id)arg1 arguments:(id)arg2 metadata:(id)arg3 recordKey:(id)arg4 databasePath:(id)arg5 writeOK:(BOOL)arg6 ;
-(NSString *)databasePath;
-(id)init;
-(_DPStorage *)storage;
-(NSString *)action;
-(NSString *)arguments;
-(id)description;
-(BOOL)writeOK;
-(NSString *)recordKey;
-(NSString *)metadata;
-(BOOL)listKeys;
-(id)initWithAction:(id)arg1 arguments:(id)arg2 metadata:(id)arg3 recordKey:(id)arg4 databasePath:(id)arg5 writeOK:(BOOL)arg6 ;
-(BOOL)recordNumbers:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(BOOL)recordBitVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(BOOL)recordStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(BOOL)recordWords:(id)arg1 forKey:(id)arg2 ;
-(id)queryForKey:(id)arg1 ;
-(BOOL)submitRecordsForKey:(id)arg1 ;
-(BOOL)listReportsFor:(id)arg1 ;
-(BOOL)executeCommand;
@end

