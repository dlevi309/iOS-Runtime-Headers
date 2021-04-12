/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)assets;
-(NSString *)uid;
-(BOOL)hidden;
-(void)updateAssets:(id)arg1;
-(BOOL)canPlay;
-(NSSet *)keywords;
-(NSSet *)tagIDs;
-(NSString *)artistName;
-(long long)metadataVersion;
-(UIImage *)artwork;
-(BOOL)isLoaded;
-(long long)sampleRate;
-(SCD_Struct_PM8*)minimumDuration;
-(NSString *)songName;
-(id)assetWithID:(id)arg1;
-(BOOL)recalled;
-(SCD_Struct_PM8*)naturalDuration;
-(id)existingAssetWithID:(id)arg1;
-(NSString *)songFormat;
-(NSString *)audioEncoderPresetName;
-(BOOL)verifyRendition:(id)arg1 forDuration:(SCD_Struct_PM8)arg2 failureReason:(id*)arg3;
-(id)idealDurations;
-(id)renditionForDuration:(SCD_Struct_PM8)arg1 withOptions:(id)arg2 testingContext:(id)arg3;
-(id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2;
-(NSDictionary *)customOptions;

@end

