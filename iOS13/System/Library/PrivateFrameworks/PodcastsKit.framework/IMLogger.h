/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@class NSString, NSFileHandle, NSRegularExpression;

@interface IMLogger : NSObject {

	NSString* _auxPath;
	NSFileHandle* _fileHandle;
	NSString* _filter;
	NSString* _runtimeOverride;
	int _pid;
	NSString* _procName;
	BOOL _logTofileOnly;
	NSRegularExpression* _runtimeOverrideRegex;

}

@property (nonatomic,copy) NSString * filter;              //@synthesize filter=_filter - In the implementation block
@property (copy) NSString * runtimeOverride;               //@synthesize runtimeOverride=_runtimeOverride - In the implementation block
+(id)sharedLogger;
+(id)rolledLogPrefix;
+(void)rollLogPath:(id)arg1 maxSize:(unsigned long long)arg2 ;
+(void)deleteRolledLogsForLogPath:(id)arg1 maxAge:(double)arg2 ;
-(id)init;
-(void)setFilter:(NSString *)arg1 ;
-(NSString *)filter;
-(void)logString:(id)arg1 ;
-(BOOL)shouldOverrideCondition:(id)arg1 file:(id)arg2 ;
-(void)logFunction:(const char*)arg1 format:(id)arg2 ;
-(void)logFile:(const char*)arg1 lineNumber:(int)arg2 format:(id)arg3 ;
-(void)setRuntimeOverride:(NSString *)arg1 ;
-(NSString *)runtimeOverride;
-(void)setAuxPath:(id)arg1 ;
-(id)auxPath;
-(void)addRuntimeOverride:(id)arg1 ;
-(void)removeRuntimeOverride:(id)arg1 ;
-(void)setLogToFileOnly:(BOOL)arg1 ;
-(BOOL)logTofileOnly;
@end

