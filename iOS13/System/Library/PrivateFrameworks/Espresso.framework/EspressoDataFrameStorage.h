/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@class NSMutableArray, NSMutableDictionary, NSString;

@interface EspressoDataFrameStorage : NSObject {

	NSMutableArray* _dataFrames;
	NSMutableDictionary* _mappedFiles;
	NSString* _baseFilename;

}

@property (retain) NSMutableArray * dataFrames;                    //@synthesize dataFrames=_dataFrames - In the implementation block
@property (retain) NSMutableDictionary * mappedFiles;              //@synthesize mappedFiles=_mappedFiles - In the implementation block
@property (retain) NSString * baseFilename;                        //@synthesize baseFilename=_baseFilename - In the implementation block
+(id)dataFrameStorageFromPath:(id)arg1 error:(id*)arg2 ;
-(NSString *)baseFilename;
-(NSMutableDictionary *)mappedFiles;
-(unsigned long long)numberOfDataFrames;
-(id)dataFrameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)dataFrames;
-(void)setDataFrames:(NSMutableArray *)arg1 ;
-(void)setMappedFiles:(NSMutableDictionary *)arg1 ;
-(void)setBaseFilename:(NSString *)arg1 ;
@end

