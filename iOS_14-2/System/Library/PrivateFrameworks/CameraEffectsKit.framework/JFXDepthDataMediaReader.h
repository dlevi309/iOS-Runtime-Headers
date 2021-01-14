/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXMediaVideoTrackReader.h>

@protocol JFXMediaVideoTrackReader, OS_dispatch_queue;
@class NSError, JFXMediaReaderDepthData, NSObject, JFXDepthDecompressor, NSString;

@interface JFXDepthDataMediaReader : NSObject <JFXMediaVideoTrackReader> {

	id<JFXMediaVideoTrackReader> _reader;
	NSError* _lastDecodeError;
	JFXMediaReaderDepthData* _cachedDepthData;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	JFXDepthDecompressor* _depthDecompressor;

}

@property (nonatomic,readonly) id<JFXMediaVideoTrackReader> reader;                            //@synthesize reader=_reader - In the implementation block
@property (nonatomic,retain) NSError * lastDecodeError;                                        //@synthesize lastDecodeError=_lastDecodeError - In the implementation block
@property (nonatomic,retain) JFXMediaReaderDepthData * cachedDepthData;                        //@synthesize cachedDepthData=_cachedDepthData - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> synchronizationQueue;              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (nonatomic,retain) JFXDepthDecompressor * depthDecompressor;                         //@synthesize depthDecompressor=_depthDecompressor - In the implementation block
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
-(id<JFXMediaVideoTrackReader>)reader;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(NSError *)error;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(BOOL)isScrubbing;
-(long long)status;
-(BOOL)beginReadingAtTimeRange:(SCD_Struct_JF4)arg1 ;
-(BOOL)beginReading;
-(SCD_Struct_JF4)readableTimeRange;
-(unsigned long long)signPostID;
-(id)videoSampleForTime:(SCD_Struct_JF3)arg1 ;
-(void)setLastDecodeError:(NSError *)arg1 ;
-(NSError *)lastDecodeError;
-(id)initWithVideoTrackReader:(id)arg1 ;
-(id)depthDataForTime:(SCD_Struct_JF3)arg1 ;
-(id)JFX_readDepthDataForTime:(SCD_Struct_JF3)arg1 ;
-(void)setCachedDepthData:(JFXMediaReaderDepthData *)arg1 ;
-(JFXMediaReaderDepthData *)cachedDepthData;
-(id)JFX_cachedDepthDataForTime:(SCD_Struct_JF3)arg1 ;
-(id)JFX_decompressAVDepthDataFromVideoTrackReaderSample:(id)arg1 ;
-(JFXDepthDecompressor *)depthDecompressor;
-(void)setDepthDecompressor:(JFXDepthDecompressor *)arg1 ;
@end

