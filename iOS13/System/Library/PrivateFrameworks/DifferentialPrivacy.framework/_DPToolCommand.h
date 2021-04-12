/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSString, _DPStorage;

@interface _DPToolCommand : NSObject {

	BOOL _writeOK;
	NSString* _action;
	NSString* _arguments;
	NSString* _recordKey;
	NSString* _databasePath;
	_DPStorage* _storage;

}

@property (nonatomic,readonly) _DPStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * arguments;                 //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordKey;                 //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) BOOL writeOK;                              //@synthesize writeOK=_writeOK - In the implementation block
+(id)supportedCommands;
+(id)command:(id)arg1 arguments:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(BOOL)arg5 ;
-(id)init;
-(id)description;
-(_DPStorage *)storage;
-(NSString *)arguments;
-(NSString *)action;
-(NSString *)databasePath;
-(NSString *)recordKey;
-(id)initWithAction:(id)arg1 arguments:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(BOOL)arg5 ;
-(BOOL)recordNumbers:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordBitValues:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordStrings:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordWords:(id)arg1 forKey:(id)arg2 ;
-(id)queryForKey:(id)arg1 ;
-(BOOL)submitRecordsForKey:(id)arg1 ;
-(BOOL)listReportsFor:(id)arg1 ;
-(BOOL)listKeys;
-(BOOL)executeCommand;
-(BOOL)writeOK;
@end

