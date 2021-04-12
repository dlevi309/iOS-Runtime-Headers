/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSDate, NSString, NSError;

@interface PHImportException : NSObject {

	NSDate* _createDate;
	long long _type;
	NSString* _path;
	NSString* _sourceCodeFile;
	unsigned long long _lineNumber;
	NSError* _underlyingError;

}

@property (nonatomic,readonly) NSDate * createDate;                        //@synthesize createDate=_createDate - In the implementation block
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * sourceCodeFile;                  //@synthesize sourceCodeFile=_sourceCodeFile - In the implementation block
@property (nonatomic,readonly) unsigned long long lineNumber;              //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,readonly) NSError * underlyingError;                  //@synthesize underlyingError=_underlyingError - In the implementation block
+(id)logForAllExceptions:(id)arg1 ;
-(unsigned long long)lineNumber;
-(NSError *)underlyingError;
-(NSString *)path;
-(id)description;
-(long long)type;
-(NSDate *)createDate;
-(id)initWithType:(long long)arg1 path:(id)arg2 underlyingError:(id)arg3 file:(char*)arg4 line:(unsigned long long)arg5 ;
-(NSString *)sourceCodeFile;
@end

