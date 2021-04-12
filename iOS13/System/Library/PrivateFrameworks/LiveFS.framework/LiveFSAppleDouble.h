/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


@protocol OS_dispatch_semaphore;
#import <LiveFS/LiveFS-Structs.h>
@class NSMutableData, LiveFSAppleDoubleManager, NSString, NSObject;

@interface LiveFSAppleDouble : NSObject {

	int _pid;
	BOOL _weCreatedFile;
	unsigned long long _baseFileID;
	LIFileAttributes _ADFileAttributes;
	NSMutableData* _ADHeaderBuffer;
	unsigned long long _ADBufferHeaderBytesValid;
	unsigned long long _IOSize;
	BOOL _ADFileOpen;
	BOOL _ADFileOK;
	char* _rawAD;
	apple_double_header* _filehdr;
	apple_double_entry* _finderinfo;
	apple_double_entry* _rsrcfork;
	attr_header* _attrhdr;
	attr_entry* _attr_entry;
	BOOL _emptyfinderinfo;
	BOOL _readonly;
	BOOL _lookupFailed;
	int _purpose;
	LiveFSAppleDoubleManager* manager;
	NSString* parentDirHandle;
	NSString* fileName;
	NSString* fileHandle;
	NSObject*<OS_dispatch_semaphore> syncSem;
	NSString* _baseFileHandle;

}

@property (retain) LiveFSAppleDoubleManager * manager; 
@property (retain) NSString * parentDirHandle; 
@property (retain) NSString * baseFileHandle;                             //@synthesize baseFileHandle=_baseFileHandle - In the implementation block
@property (retain) NSString * fileName; 
@property (retain) NSString * fileHandle; 
@property (retain) NSObject*<OS_dispatch_semaphore> syncSem; 
@property (readonly) int purpose;                                         //@synthesize purpose=_purpose - In the implementation block
-(void)dealloc;
-(id)description;
-(int)closeFile;
-(LiveFSAppleDoubleManager *)manager;
-(NSString *)fileHandle;
-(void)setManager:(LiveFSAppleDoubleManager *)arg1 ;
-(int)purpose;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setFileHandle:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)syncSem;
-(id)initWithManager:(id)arg1 baseFileHandle:(id)arg2 name:(id)arg3 andDirectoryHandle:(id)arg4 andPID:(int)arg5 andPurpose:(int)arg6 ;
-(void)setParentDirHandle:(NSString *)arg1 ;
-(void)setSyncSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setBaseFileHandle:(NSString *)arg1 ;
-(int)openFile;
-(int)loadADHeader;
-(NSString *)baseFileHandle;
-(NSString *)parentDirHandle;
-(int)lookupFile;
-(int)createFile;
-(void)swapFileHeader:(apple_double_header*)arg1 ;
-(void)swapAttrHeader:(attr_header*)arg1 ;
-(void)shiftDataDownAtOffset:(unsigned)arg1 lengh:(unsigned)arg2 howMuch:(unsigned long long)arg3 ;
-(void)initEmptyResourceFork:(rsrcfork_header*)arg1 ;
-(void)loadAttrHeader;
-(int)removeXattrNamed:(id)arg1 ;
-(int)writeXattrInfo;
-(void)shiftDataUp:(long long)arg1 length:(unsigned long long)arg2 howMuch:(unsigned long long)arg3 ;
-(BOOL)containerFileExists;
-(id)valueForXattrNamed:(id)arg1 posixError:(int*)arg2 ;
-(int)setValue:(id)arg1 forXattrNamed:(id)arg2 how:(int)arg3 ;
-(id)allXattrNamesAndPosixError:(int*)arg1 ;
-(int)removeFile;
-(int)renameFileToDirectory:(id)arg1 andName:(id)arg2 ;
-(int)linkFileToDirectory:(id)arg1 andName:(id)arg2 ;
@end
