/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class NSError, NSArray, AVAsset, AVAssetTrack, AVAssetReader, AVAssetReaderOutput, NSCondition;

@interface VideoReader : NSObject {

	BOOL _readAheadEnable;
	BOOL fullRangeVideo;
	float trackStart;
	float trackLength;
	float readStart;
	float readLength;
	int timeScale;
	float fps;
	unsigned imageWidth;
	unsigned imageHeight;
	unsigned _pixelFormatOptions;
	int _readaheadState;
	NSError* lastError;
	NSArray* formatDescriptions;
	AVAsset* asset;
	AVAssetTrack* videoTrack;
	AVAssetReader* assetReader;
	AVAssetReaderOutput* trackOutput;
	opaqueCMSampleBufferRef _readaheadBuf;
	NSCondition* _readaheadLock;
	opaqueCMSampleBufferRef _lastFrame;
	SCD_Struct_Au1 trackStartT;
	SCD_Struct_Au1 trackLengthT;
	SCD_Struct_Au1 readStartT;
	SCD_Struct_Au1 readLengthT;
	SCD_Struct_Au1 minFrameDuration;
	SCD_Struct_Au1 lastPresentationTime;
	CGAffineTransform preferredTransform;

}

@property (readonly) AVAssetReader * assetReader; 
@property (readonly) AVAssetReaderOutput * trackOutput; 
@property (assign) opaqueCMSampleBufferRef readaheadBuf;                  //@synthesize readaheadBuf=_readaheadBuf - In the implementation block
@property (assign) int readaheadState;                                    //@synthesize readaheadState=_readaheadState - In the implementation block
@property (retain) NSCondition * readaheadLock;                           //@synthesize readaheadLock=_readaheadLock - In the implementation block
@property (assign) opaqueCMSampleBufferRef lastFrame;                     //@synthesize lastFrame=_lastFrame - In the implementation block
@property (readonly) float trackStart; 
@property (readonly) float trackLength; 
@property (readonly) SCD_Struct_Au1 trackStartT; 
@property (readonly) SCD_Struct_Au1 trackLengthT; 
@property (assign) float readStart; 
@property (assign) float readLength; 
@property (assign) SCD_Struct_Au1 readStartT; 
@property (assign) SCD_Struct_Au1 readLengthT; 
@property (readonly) int timeScale; 
@property (readonly) float fps; 
@property (readonly) SCD_Struct_Au1 minFrameDuration; 
@property (readonly) unsigned imageWidth; 
@property (readonly) unsigned imageHeight; 
@property (readonly) NSError * lastError; 
@property (readonly) CGAffineTransform preferredTransform; 
@property (readonly) NSArray * formatDescriptions; 
@property (readonly) BOOL fullRangeVideo; 
@property (readonly) AVAsset * asset; 
@property (readonly) AVAssetTrack * videoTrack; 
@property (readonly) SCD_Struct_Au1 lastPresentationTime; 
@property (assign) unsigned pixelFormatOptions;                           //@synthesize pixelFormatOptions=_pixelFormatOptions - In the implementation block
@property (setter=setReadAheadEnable:) BOOL readAheadEnable; 
-(float)fps;
-(NSError *)lastError;
-(AVAsset *)asset;
-(id)initFromFile:(id)arg1 ;
-(CGAffineTransform)preferredTransform;
-(int)timeScale;
-(SCD_Struct_Au1)minFrameDuration;
-(id)initWithAsset:(id)arg1 ;
-(unsigned)imageWidth;
-(AVAssetReaderOutput *)trackOutput;
-(int)reset;
-(unsigned)imageHeight;
-(NSArray *)formatDescriptions;
-(void)setLastFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(AVAssetReader *)assetReader;
-(AVAssetTrack *)videoTrack;
-(void)setPixelFormatOptions:(unsigned)arg1 ;
-(int)getFrameAsSampleBuf:(opaqueCMSampleBuffer*)arg1 ;
-(void)setReadAheadEnable:(BOOL)arg1 ;
-(void)setReadStartT:(SCD_Struct_Au1)arg1 ;
-(NSCondition *)readaheadLock;
-(opaqueCMSampleBufferRef)readaheadBuf;
-(void)setReadaheadBuf:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)lastFrame;
-(unsigned)pixelFormatOptions;
-(int)buildAssetReader;
-(int)readaheadState;
-(void)fireReadahead;
-(void)setReadaheadState:(int)arg1 ;
-(opaqueCMSampleBufferRef)nextSampleBuf;
-(void)setReadaheadLock:(NSCondition *)arg1 ;
-(void)setReadStart:(float)arg1 ;
-(float)readStart;
-(int)getFrame:(CGImage*)arg1 ;
-(int)getFrameAtTime:(SCD_Struct_Au1)arg1 exactTime:(BOOL)arg2 frame:(opaqueCMSampleBuffer*)arg3 ;
-(BOOL)readAheadEnable;
-(int)skipFrames:(unsigned)arg1 ;
-(float)trackStart;
-(float)trackLength;
-(SCD_Struct_Au1)trackStartT;
-(float)readLength;
-(void)setReadLength:(float)arg1 ;
-(SCD_Struct_Au1)readStartT;
-(SCD_Struct_Au1)readLengthT;
-(void)setReadLengthT:(SCD_Struct_Au1)arg1 ;
-(BOOL)fullRangeVideo;
-(SCD_Struct_Au1)lastPresentationTime;
-(SCD_Struct_Au1)trackLengthT;
@end

