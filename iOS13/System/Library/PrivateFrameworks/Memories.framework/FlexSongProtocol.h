/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class NSString, NSSet, NSArray, UIImage, NSDictionary;


@protocol FlexSongProtocol
@property (nonatomic,readonly) NSString * uid; 
@property (nonatomic,readonly) NSString * audioEncoderPresetName; 
@property (nonatomic,readonly) NSString * songName; 
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSSet * tagIDs; 
@property (nonatomic,readonly) NSSet * keywords; 
@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,readonly) UIImage * artwork; 
@property (nonatomic,readonly) NSString * songFormat; 
@property (nonatomic,readonly) long long sampleRate; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) BOOL recalled; 
@property (nonatomic,readonly) long long metadataVersion; 
@property (nonatomic,readonly) NSDictionary * customOptions; 
@required
-(BOOL)isLoaded;
-(NSSet *)keywords;
-(NSString *)uid;
-(BOOL)hidden;
-(long long)sampleRate;
-(NSArray *)assets;
-(UIImage *)artwork;
-(BOOL)canPlay;
-(NSString *)artistName;
-(long long)metadataVersion;
-(NSSet *)tagIDs;
-(void)updateAssets:(id)arg1;
-(SCD_Struct_PM5*)naturalDuration;
-(SCD_Struct_PM5*)minimumDuration;
-(id)assetWithID:(id)arg1;
-(NSString *)songName;
-(BOOL)recalled;
-(NSDictionary *)customOptions;
-(id)existingAssetWithID:(id)arg1;
-(NSString *)songFormat;
-(NSString *)audioEncoderPresetName;
-(BOOL)verifyRendition:(id)arg1 forDuration:(SCD_Struct_PM5)arg2 failureReason:(id*)arg3;
-(id)idealDurations;
-(id)renditionForDuration:(SCD_Struct_PM5)arg1 withOptions:(id)arg2 testingContext:(id)arg3;
-(id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2;

@end

