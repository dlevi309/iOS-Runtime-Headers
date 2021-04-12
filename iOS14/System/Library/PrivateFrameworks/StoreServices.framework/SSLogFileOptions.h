/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying> {

	NSString* _directoryPath;
	NSString* _fileName;
	long long _maxNumberOfLogFiles;
	unsigned long long _maxSizeInBytes;

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

