/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)dataFrames;
-(NSString *)baseFilename;
-(NSMutableDictionary *)mappedFiles;
-(void)setDataFrames:(NSMutableArray *)arg1 ;
-(void)setMappedFiles:(NSMutableDictionary *)arg1 ;
-(void)setBaseFilename:(NSString *)arg1 ;
-(unsigned long long)numberOfDataFrames;
-(id)dataFrameAtIndex:(unsigned long long)arg1 ;
@end

