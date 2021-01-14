/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXAVMediaDataReader.h>
#import <libobjc.A.dylib/JFXMediaMetadataReader.h>

@class AVAssetReaderOutputMetadataAdaptor, AVMetadataItem, NSError, NSString;

@interface JFXAVMediaMetaDataReader : JFXAVMediaDataReader <JFXMediaMetadataReader> {

	AVAssetReaderOutputMetadataAdaptor* _assetReaderOutputMetadataAdaptor;
	AVMetadataItem* _currentMetadataItem;
	AVMetadataItem* _nextMetadataItem;

}

@property (nonatomic,retain) AVAssetReaderOutputMetadataAdaptor * assetReaderOutputMetadataAdaptor;              //@synthesize assetReaderOutputMetadataAdaptor=_assetReaderOutputMetadataAdaptor - In the implementation block
@property (nonatomic,retain) AVMetadataItem * currentMetadataItem;                                               //@synthesize currentMetadataItem=_currentMetadataItem - In the implementation block
@property (nonatomic,retain) AVMetadataItem * nextMetadataItem;                                                  //@synthesize nextMetadataItem=_nextMetadataItem - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF4 readableTimeRange; 
@property (assign,nonatomic) BOOL isScrubbing; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long signPostID; 
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)JFX_preloadData;
-(id)createAssetReaderTrackOutput;
-(void)didUpdateReadingRange;
-(BOOL)readAheadToTime:(SCD_Struct_JF3)arg1 ;
-(void)readAndDiscardRemainingAvailableData;
-(BOOL)hasRemainingAvailableData;
-(SCD_Struct_JF3)startTimeOfCurrentData;
-(id)metadataForTime:(SCD_Struct_JF3)arg1 ;
-(void)cancelReadingForReaderReset;
-(void)setAssetReaderOutputMetadataAdaptor:(AVAssetReaderOutputMetadataAdaptor *)arg1 ;
-(void)setCurrentMetadataItem:(AVMetadataItem *)arg1 ;
-(void)setNextMetadataItem:(AVMetadataItem *)arg1 ;
-(AVMetadataItem *)nextMetadataItem;
-(AVMetadataItem *)currentMetadataItem;
-(AVAssetReaderOutputMetadataAdaptor *)assetReaderOutputMetadataAdaptor;
@end

