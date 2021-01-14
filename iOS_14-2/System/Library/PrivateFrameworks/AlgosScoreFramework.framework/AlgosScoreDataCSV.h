/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
*/


@class AlgosScoreCSVReader, NSMutableDictionary;

@interface AlgosScoreDataCSV : NSObject {

	void* csvData;
	int _debug;
	AlgosScoreCSVReader* _rawStreamData;
	NSMutableDictionary* _statsDict;

}

@property (nonatomic,retain) AlgosScoreCSVReader * rawStreamData;              //@synthesize rawStreamData=_rawStreamData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * statsDict;                  //@synthesize statsDict=_statsDict - In the implementation block
@property (assign) int debug;                                                  //@synthesize debug=_debug - In the implementation block
-(int)transformer;
-(id)init;
-(void)setDebug:(int)arg1 ;
-(id)readData:(id)arg1 ;
-(int)debug;
-(void)dealloc;
-(void)setStatsDict:(NSMutableDictionary *)arg1 ;
-(void)setRawStreamData:(AlgosScoreCSVReader *)arg1 ;
-(id)readData:(id)arg1 catchException:(BOOL)arg2 ;
-(void)populateScore:(id)arg1 ;
-(NSMutableDictionary *)statsDict;
-(void)clearStreamingData;
-(id)readDirectoryAndScore:(id)arg1 score:(id)arg2 options:(id)arg3 ;
-(AlgosScoreCSVReader *)rawStreamData;
@end

