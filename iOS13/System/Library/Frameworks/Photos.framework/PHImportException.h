/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSString, NSError, NSDate;

@interface PHImportException : NSObject {

	NSString* _message;
	unsigned long long _importance;
	NSString* _path;
	NSString* _sourceCodeFile;
	unsigned long long _lineNumber;
	NSError* _nsError;
	NSDate* _createDate;

}

@property (nonatomic,readonly) NSDate * createDate;                        //@synthesize createDate=_createDate - In the implementation block
@property (nonatomic,readonly) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned long long importance;              //@synthesize importance=_importance - In the implementation block
@property (nonatomic,readonly) BOOL isTerminal; 
@property (nonatomic,readonly) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * sourceCodeFile;                  //@synthesize sourceCodeFile=_sourceCodeFile - In the implementation block
@property (nonatomic,readonly) unsigned long long lineNumber;              //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,readonly) NSError * nsError;                          //@synthesize nsError=_nsError - In the implementation block
+(id)exceptionWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char*)arg5 line:(unsigned long long)arg6 ;
+(id)mostImportantException:(id)arg1 ;
+(id)logForMostImportantException:(id)arg1 ;
+(id)logForTerminalExceptionsForRecorder:(id)arg1 ;
+(id)logForAllExceptions:(id)arg1 ;
-(id)description;
-(NSString *)path;
-(unsigned long long)lineNumber;
-(NSString *)message;
-(BOOL)isCritical;
-(id)initWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char*)arg5 line:(unsigned long long)arg6 ;
-(BOOL)isTerminal;
-(id)logWithPrefix:(id)arg1 ;
-(unsigned long long)importance;
-(NSString *)sourceCodeFile;
-(NSError *)nsError;
-(NSDate *)createDate;
@end

