/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKArchiveWriter.h>

@class NSURL, NSFileHandle;

@interface _HKArchiveCreator : NSObject <_HKArchiveWriter> {

	archiveRef _archive;
	NSURL* _archiveURL;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,copy,readonly) NSURL * archiveURL;                //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(void)closeArchive;
-(long long)writeData:(const void*)arg1 ofLength:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 fileHandle:(id)arg2 archiveType:(long long)arg3 ;
-(void)_addDataOfSize:(long long)arg1 toPathInArchive:(id)arg2 fromByteProvider:(/*^block*/id)arg3 ;
-(id)initWithURL:(id)arg1 archiveType:(long long)arg2 ;
-(id)initWithFileHandle:(id)arg1 archiveType:(long long)arg2 ;
-(void)addFileToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(void)addDataToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(NSURL *)archiveURL;
-(NSFileHandle *)fileHandle;
-(void)dealloc;
-(BOOL)archiveIsValid;
@end

