/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class NSArray, NSString;

@interface FlexMLSummaryManager : NSObject {

	int _targetTimeScale;
	NSArray* _allFileNames;
	NSArray* _allDurations;
	NSString* _rootPath;
	NSString* _metadataPath;

}

@property (nonatomic,readonly) NSArray * allFileNames;               //@synthesize allFileNames=_allFileNames - In the implementation block
@property (nonatomic,readonly) NSArray * allDurations;               //@synthesize allDurations=_allDurations - In the implementation block
@property (nonatomic,readonly) NSString * rootPath;                  //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSString * metadataPath;              //@synthesize metadataPath=_metadataPath - In the implementation block
@property (nonatomic,readonly) int targetTimeScale;                  //@synthesize targetTimeScale=_targetTimeScale - In the implementation block
-(NSString *)rootPath;
-(NSString *)metadataPath;
-(id)initWithSummaryMapping:(id)arg1 bundlePath:(id)arg2 metadataPath:(id)arg3 targetTimeScale:(int)arg4 ;
-(id)summaryForDuration:(SCD_Struct_PM8)arg1 ;
-(id)allSummaryDurations;
-(NSArray *)allDurations;
-(double)averageGranularityBetweenSummaries;
-(id)_summaryForDuration:(SCD_Struct_PM8)arg1 ;
-(int)targetTimeScale;
-(NSArray *)allFileNames;
@end

