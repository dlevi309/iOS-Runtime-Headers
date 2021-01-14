/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject {

	AVAssetReaderOutputInternal* _internal;

}

@property (getter=_weakReferenceToAssetReader,nonatomic,readonly) AVWeakReference * weakReferenceToAssetReader; 
@property (assign,setter=_setExtractionID:,getter=_extractionID,nonatomic) int extractionID; 
@property (getter=_figAssetReaderExtractionOptions,nonatomic,readonly) NSDictionary * figAssetReaderExtractionOptions; 
@property (getter=_trimsSampleDurations,nonatomic,readonly) BOOL trimsSampleDurations; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (assign,nonatomic) BOOL alwaysCopiesSampleData; 
+(void)initialize;
+(id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)arg1 withFormatDescription:(id)arg2 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(id)_asset;
-(void)_cancelReading;
-(id)_errorForOSStatus:(int)arg1 ;
-(void)_attachToWeakReferenceToAssetReader:(id)arg1 ;
-(int)_extractionID;
-(BOOL)_prepareForReadingReturningError:(id*)arg1 ;
-(OpaqueFigAssetReaderRef)_figAssetReader;
-(BOOL)alwaysCopiesSampleData;
-(BOOL)supportsRandomAccess;
-(id)currentTimeRanges;
-(void)_setFigAssetReader:(OpaqueFigAssetReaderRef)arg1 ;
-(id)_weakReferenceToAssetReader;
-(BOOL)_trimsSampleDurations;
-(void)_markAsFinished;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(void)markConfigurationAsFinal;
-(void)setAlwaysCopiesSampleData:(BOOL)arg1 ;
-(BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(id*)arg1 ;
-(void)setSupportsRandomAccess:(BOOL)arg1 ;
-(void)resetForReadingTimeRanges:(id)arg1 ;
-(void)_setExtractionID:(int)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1 ;
-(void)_figAssetReaderDecodeError;
-(void)_figAssetReaderFailed;
-(void)_figAssetReaderServerConnectionDied;
-(NSString *)mediaType;
-(id)init;
-(BOOL)_isFinished;
-(BOOL)maximizePowerEfficiency;
-(long long)_status;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(void)dealloc;
@end

