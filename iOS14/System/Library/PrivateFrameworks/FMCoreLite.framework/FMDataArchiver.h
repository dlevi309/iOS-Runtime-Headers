/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFileURL:(NSURL *)arg1 ;
-(BOOL)saveDictionary:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)dataWritingOptionForDataProtectionClass:(long long)arg1 ;
-(BOOL)createDirectories;
-(NSData *)unitTestData;
-(id)readArrayAndClasses:(id)arg1 error:(id*)arg2 ;
-(id)saveArray:(id)arg1 ;
-(id)saveDictionary:(id)arg1 ;
-(BOOL)backedUp;
-(long long)dataProtectionClass;
-(NSURL *)fileURL;
-(void)setDataProtectionClass:(long long)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(void)injectUnitTestData:(id)arg1 ;
-(void)setBackedUp:(BOOL)arg1 ;
-(id)readDictionaryAndClasses:(id)arg1 error:(id*)arg2 ;
-(void)setUnitTestData:(NSData *)arg1 ;
-(id)saveObject:(id)arg1 ;
-(id)underlyingDataWithError:(id*)arg1 ;
-(void)setCreateDirectories:(BOOL)arg1 ;
-(id)readDataOfClasses:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveArray:(id)arg1 error:(id*)arg2 ;
@end

