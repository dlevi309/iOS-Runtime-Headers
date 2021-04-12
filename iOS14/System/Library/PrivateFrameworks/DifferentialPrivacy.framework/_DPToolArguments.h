/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSString;

@interface _DPToolArguments : NSObject {

	BOOL _verbose;
	BOOL _writeOK;
	NSString* _command;
	NSString* _arguments;
	NSString* _metadata;
	NSString* _recordKey;
	NSString* _databasePath;

}

@property (nonatomic,copy,readonly) NSString * command;                   //@synthesize command=_command - In the implementation block
@property (nonatomic,copy,readonly) NSString * arguments;                 //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordKey;                 //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,readonly) BOOL verbose;                              //@synthesize verbose=_verbose - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) BOOL writeOK;                              //@synthesize writeOK=_writeOK - In the implementation block
+(id)usage;
-(NSString *)databasePath;
-(id)init;
-(id)job;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)verbose;
-(NSString *)arguments;
-(id)description;
-(BOOL)writeOK;
-(NSString *)recordKey;
-(NSString *)command;
-(NSString *)metadata;
@end

