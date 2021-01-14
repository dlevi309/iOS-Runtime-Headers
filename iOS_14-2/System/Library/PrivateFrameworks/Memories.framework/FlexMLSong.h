/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/FlexSongBackend.h>

@class NSURL, FlexMLSummaryManager, NSString;

@interface FlexMLSong : FlexSongBackend {

	NSURL* _audioFileURL;
	FlexMLSummaryManager* _summaryManager;
	NSString* _rootPath;
	NSString* _metadataPath;
	NSString* _audioFileExtension;
	SCD_Struct_PM8 _cachedNaturalDuration;

}

@property (nonatomic,retain) FlexMLSummaryManager * summaryManager;              //@synthesize summaryManager=_summaryManager - In the implementation block
@property (nonatomic,readonly) NSString * rootPath;                              //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSString * metadataPath;                          //@synthesize metadataPath=_metadataPath - In the implementation block
@property (nonatomic,retain) NSString * audioFileExtension;                      //@synthesize audioFileExtension=_audioFileExtension - In the implementation block
@property (assign,nonatomic) SCD_Struct_PM8 cachedNaturalDuration;               //@synthesize cachedNaturalDuration=_cachedNaturalDuration - In the implementation block
@property (nonatomic,readonly) NSURL * audioFileURL;                             //@synthesize audioFileURL=_audioFileURL - In the implementation block
+(id)loadSongAtPath:(id)arg1 ;
-(BOOL)canPlay;
-(id)initWithFileAtPath:(id)arg1 ;
-(NSString *)rootPath;
-(NSString *)metadataPath;
-(NSURL *)audioFileURL;
-(BOOL)isLoaded;
-(SCD_Struct_PM8)minimumDuration;
-(SCD_Struct_PM8)naturalDuration;
-(void)_setupInitialAssets:(id)arg1 ;
-(NSString *)audioFileExtension;
-(FlexMLSummaryManager *)summaryManager;
-(BOOL)verifyRendition:(id)arg1 forDuration:(SCD_Struct_PM8)arg2 failureReason:(id*)arg3 ;
-(id)idealDurations;
-(id)renditionForDuration:(SCD_Struct_PM8)arg1 withOptions:(id)arg2 testingContext:(id)arg3 ;
-(id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2 ;
-(void)setSummaryManager:(FlexMLSummaryManager *)arg1 ;
-(void)setAudioFileExtension:(NSString *)arg1 ;
-(SCD_Struct_PM8)cachedNaturalDuration;
-(void)setCachedNaturalDuration:(SCD_Struct_PM8)arg1 ;
@end

