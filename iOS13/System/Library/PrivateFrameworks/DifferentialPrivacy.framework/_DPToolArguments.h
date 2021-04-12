/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSString;

@interface _DPToolArguments : NSObject {

	BOOL _verbose;
	BOOL _writeOK;
	NSString* _command;
	NSString* _arguments;
	NSString* _recordKey;
	NSString* _databasePath;

}

@property (nonatomic,copy,readonly) NSString * command;                   //@synthesize command=_command - In the implementation block
@property (nonatomic,copy,readonly) NSString * arguments;                 //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordKey;                 //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,readonly) BOOL verbose;                              //@synthesize verbose=_verbose - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) BOOL writeOK;                              //@synthesize writeOK=_writeOK - In the implementation block
+(id)usage;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)arguments;
-(NSString *)databasePath;
-(NSString *)recordKey;
-(NSString *)command;
-(id)job;
-(BOOL)verbose;
-(BOOL)writeOK;
@end

