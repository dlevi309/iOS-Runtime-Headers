/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSURL, NSFileHandle;

@interface _HKArchiveCreator : NSObject {

	archiveRef _archive;
	NSURL* _archiveURL;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,copy,readonly) NSURL * archiveURL;                //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(void)dealloc;
-(NSFileHandle *)fileHandle;
-(void)closeArchive;
-(id)initWithURL:(id)arg1 fileHandle:(id)arg2 archiveType:(long long)arg3 ;
-(BOOL)archiveIsValid;
-(long long)writeData:(const void*)arg1 ofLength:(unsigned long long)arg2 ;
-(void)_addDataOfSize:(long long)arg1 toPathInArchive:(id)arg2 fromByteProvider:(/*^block*/id)arg3 ;
-(id)initWithURL:(id)arg1 archiveType:(long long)arg2 ;
-(id)initWithFileHandle:(id)arg1 archiveType:(long long)arg2 ;
-(void)addFileToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(void)addDataToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(NSURL *)archiveURL;
@end

