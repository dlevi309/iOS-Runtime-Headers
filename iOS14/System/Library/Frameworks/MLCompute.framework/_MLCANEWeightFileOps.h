/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@class NSString, NSFileHandle;

@interface _MLCANEWeightFileOps : NSObject {

	NSString* _filePath;
	NSFileHandle* _fileHandle;
	unsigned long long _currentDataSizeInBytes;
	unsigned long long _currentPaddingSizeInBytes;
	unsigned long long _currentFileSizeInBytes;

}

@property (assign,nonatomic) unsigned long long currentDataSizeInBytes;                 //@synthesize currentDataSizeInBytes=_currentDataSizeInBytes - In the implementation block
@property (assign,nonatomic) unsigned long long currentPaddingSizeInBytes;              //@synthesize currentPaddingSizeInBytes=_currentPaddingSizeInBytes - In the implementation block
@property (assign,nonatomic) unsigned long long currentFileSizeInBytes;                 //@synthesize currentFileSizeInBytes=_currentFileSizeInBytes - In the implementation block
@property (nonatomic,retain,readonly) NSString * filePath;                              //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain,readonly) NSFileHandle * fileHandle;                        //@synthesize fileHandle=_fileHandle - In the implementation block
+(id)weightFileOpsAtPath:(id)arg1 ;
-(NSString *)filePath;
-(NSFileHandle *)fileHandle;
-(long long)writeData:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 ;
-(long long)writeTensor:(id)arg1 ;
-(unsigned long long)currentFileSizeInBytes;
-(unsigned long long)currentPaddingSizeInBytes;
-(void)setCurrentPaddingSizeInBytes:(unsigned long long)arg1 ;
-(unsigned long long)currentDataSizeInBytes;
-(void)setCurrentDataSizeInBytes:(unsigned long long)arg1 ;
-(void)setCurrentFileSizeInBytes:(unsigned long long)arg1 ;
@end

