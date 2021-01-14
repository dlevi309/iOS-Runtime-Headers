/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ASDLogFileOptions : NSObject <NSCopying> {

	NSString* _directoryPath;
	NSString* _fileName;
	unsigned long long _maxSizeInBytes;
	long long _maxNumberOfLogFiles;

}

@property (nonatomic,copy) NSString * logDirectoryPath;                      //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,copy) NSString * logFileBaseName;                       //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) unsigned long long maxLogFileSize;              //@synthesize maxSizeInBytes=_maxSizeInBytes - In the implementation block
@property (assign,nonatomic) long long maxNumberOfLogFiles;                  //@synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles - In the implementation block
-(void)setLogDirectoryPath:(NSString *)arg1 ;
-(id)init;
-(NSString *)logDirectoryPath;
-(void)setLogFileBaseName:(NSString *)arg1 ;
-(long long)maxNumberOfLogFiles;
-(NSString *)logFileBaseName;
-(unsigned long long)maxLogFileSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setMaxNumberOfLogFiles:(long long)arg1 ;
-(void)setMaxLogFileSize:(unsigned long long)arg1 ;
@end

