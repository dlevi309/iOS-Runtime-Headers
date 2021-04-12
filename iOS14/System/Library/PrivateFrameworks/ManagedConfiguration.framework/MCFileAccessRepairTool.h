/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSFileManager;

@interface MCFileAccessRepairTool : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(BOOL)fileNeedsRepairAtPath:(id)arg1 ;
-(BOOL)repairFileAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)fileManagerThinksFileNeedsRepairAtPath:(id)arg1 ;
-(BOOL)posixThinksFileNeedsRepairAtPath:(id)arg1 ;
-(id)createFileManager;
-(int)accessAtPath:(const char*)arg1 mode:(int)arg2 error:(int*)arg3 ;
-(BOOL)changePermissions:(unsigned short)arg1 ofFileAtPath:(id)arg2 ;
-(id)createRepairToolErrorWithCode:(long long)arg1 ;
-(id)contentsOfFileAtPath:(id)arg1 ;
-(BOOL)writeData:(id)arg1 toFileAtPath:(id)arg2 ;
@end

