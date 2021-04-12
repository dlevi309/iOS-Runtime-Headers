/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/


@class NSURL, NSData;

@interface FMDataArchiver : NSObject {

	BOOL _backedUp;
	BOOL _createDirectories;
	long long _dataProtectionClass;
	NSURL* _fileURL;
	NSData* _unitTestData;

}

@property (nonatomic,retain) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSData * unitTestData;                        //@synthesize unitTestData=_unitTestData - In the implementation block
@property (assign,nonatomic) long long dataProtectionClass;              //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (assign,nonatomic) BOOL backedUp;                              //@synthesize backedUp=_backedUp - In the implementation block
@property (assign,nonatomic) BOOL createDirectories;                     //@synthesize createDirectories=_createDirectories - In the implementation block
+(id)defaultClasses;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(long long)dataProtectionClass;
-(void)setDataProtectionClass:(long long)arg1 ;
-(void)setBackedUp:(BOOL)arg1 ;
-(void)setCreateDirectories:(BOOL)arg1 ;
-(void)setUnitTestData:(NSData *)arg1 ;
-(id)readDataOfClasses:(id)arg1 error:(id*)arg2 ;
-(id)underlyingDataWithError:(id*)arg1 ;
-(NSData *)unitTestData;
-(id)saveObject:(id)arg1 ;
-(BOOL)createDirectories;
-(unsigned long long)dataWritingOptionForDataProtectionClass:(long long)arg1 ;
-(BOOL)backedUp;
-(void)injectUnitTestData:(id)arg1 ;
-(id)readDictionaryAndClasses:(id)arg1 error:(id*)arg2 ;
-(id)readArrayAndClasses:(id)arg1 error:(id*)arg2 ;
-(id)saveArray:(id)arg1 ;
-(id)saveDictionary:(id)arg1 ;
-(BOOL)saveArray:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveDictionary:(id)arg1 error:(id*)arg2 ;
@end

