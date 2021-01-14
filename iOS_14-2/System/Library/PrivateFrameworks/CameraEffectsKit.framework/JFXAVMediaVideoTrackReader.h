/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXAVMediaDataReader.h>
#import <libobjc.A.dylib/JFXMediaVideoTrackReader.h>

@class JFXAVMediaVideoTrackReaderSample, NSError, NSString;

@interface JFXAVMediaVideoTrackReader : JFXAVMediaDataReader <JFXMediaVideoTrackReader> {

	JFXAVMediaVideoTrackReaderSample* _currentSample;
	JFXAVMediaVideoTrackReaderSample* _nextSample;

}

@property (nonatomic,retain) JFXAVMediaVideoTrackReaderSample * currentSample;              //@synthesize currentSample=_currentSample - In the implementation block
@property (nonatomic,retain) JFXAVMediaVideoTrackReaderSample * nextSample;                 //@synthesize nextSample=_nextSample - In the implementation block
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
-(JFXAVMediaVideoTrackReaderSample *)currentSample;
-(void)setCurrentSample:(JFXAVMediaVideoTrackReaderSample *)arg1 ;
-(void)setNextSample:(JFXAVMediaVideoTrackReaderSample *)arg1 ;
-(void)JFX_preloadData;
-(JFXAVMediaVideoTrackReaderSample *)nextSample;
-(void)JFX_updateCurrentSampleDurationIfNeeded;
-(id)videoSampleForTime:(SCD_Struct_JF3)arg1 ;
-(id)createAssetReaderTrackOutput;
-(void)didUpdateReadingRange;
-(BOOL)readAheadToTime:(SCD_Struct_JF3)arg1 ;
-(void)readAndDiscardRemainingAvailableData;
-(BOOL)hasRemainingAvailableData;
-(SCD_Struct_JF3)startTimeOfCurrentData;
@end

