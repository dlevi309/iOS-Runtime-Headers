/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, CLLocation;

@interface CAMTimelapseState : NSObject <NSSecureCoding, NSCopying> {

	BOOL _captureMirrored;
	BOOL _allFramesWritten;
	BOOL _preferHEVC;
	unsigned short _sessionIdentifier;
	int _captureOrientation;
	float _focusLensPosition;
	NSString* _timelapseUUID;
	long long _captureDevice;
	NSDate* _startTime;
	CLLocation* _startLocation;
	NSDate* _lastFrameResponseTime;
	NSDate* _stopTime;
	long long _stopReasons;
	double _captureTimeInterval;
	long long _frameIndexStride;
	long long _nextFrameIndex;
	CGSize _nominalIntermediateFrameSize;

}

@property (nonatomic,retain) NSString * timelapseUUID;                                   //@synthesize timelapseUUID=_timelapseUUID - In the implementation block
@property (assign,nonatomic) unsigned short sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) long long captureDevice;                                    //@synthesize captureDevice=_captureDevice - In the implementation block
@property (assign,nonatomic) int captureOrientation;                                     //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (assign,getter=isCaptureMirrored,nonatomic) BOOL captureMirrored;              //@synthesize captureMirrored=_captureMirrored - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) CLLocation * startLocation;                                 //@synthesize startLocation=_startLocation - In the implementation block
@property (nonatomic,retain) NSDate * lastFrameResponseTime;                             //@synthesize lastFrameResponseTime=_lastFrameResponseTime - In the implementation block
@property (nonatomic,retain) NSDate * stopTime;                                          //@synthesize stopTime=_stopTime - In the implementation block
@property (assign,nonatomic) long long stopReasons;                                      //@synthesize stopReasons=_stopReasons - In the implementation block
@property (assign,nonatomic) BOOL allFramesWritten;                                      //@synthesize allFramesWritten=_allFramesWritten - In the implementation block
@property (nonatomic,readonly) double captureTimeInterval;                               //@synthesize captureTimeInterval=_captureTimeInterval - In the implementation block
@property (nonatomic,readonly) long long frameIndexStride;                               //@synthesize frameIndexStride=_frameIndexStride - In the implementation block
@property (nonatomic,readonly) long long nextFrameIndex;                                 //@synthesize nextFrameIndex=_nextFrameIndex - In the implementation block
@property (assign,nonatomic) float focusLensPosition;                                    //@synthesize focusLensPosition=_focusLensPosition - In the implementation block
@property (nonatomic,readonly) long long connectionMode; 
@property (assign,nonatomic) CGSize nominalIntermediateFrameSize;                        //@synthesize nominalIntermediateFrameSize=_nominalIntermediateFrameSize - In the implementation block
@property (assign,nonatomic) BOOL preferHEVC;                                            //@synthesize preferHEVC=_preferHEVC - In the implementation block
+(BOOL)supportsSecureCoding;
+(double)maxTimeToWaitForWrittenFrameAfterStop;
+(id)stateWithContentsOfFile:(id)arg1 ;
-(long long)captureDevice;
-(NSDate *)stopTime;
-(id)init;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CLLocation *)startLocation;
-(void)setStartLocation:(CLLocation *)arg1 ;
-(id)fullDescription;
-(void)setSessionIdentifier:(unsigned short)arg1 ;
-(long long)connectionMode;
-(void)setStopTime:(NSDate *)arg1 ;
-(unsigned short)sessionIdentifier;
-(void)setCaptureDevice:(long long)arg1 ;
-(id)description;
-(int)captureOrientation;
-(BOOL)isCaptureMirrored;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToState:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startTime;
-(void)setCaptureOrientation:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCaptureMirrored:(BOOL)arg1 ;
-(long long)stopReasons;
-(BOOL)addStopReasons:(long long)arg1 stopTime:(id)arg2 ;
-(BOOL)mergeSecondaryState:(id)arg1 ;
-(BOOL)_commonCAMTimelapseStateInitWithCoder:(id)arg1 ;
-(long long)nextFrameIndex;
-(NSString *)timelapseUUID;
-(void)setStopReasons:(long long)arg1 ;
-(BOOL)canContinueCapture;
-(BOOL)allFramesWritten;
-(void)setAllFramesWritten:(BOOL)arg1 ;
-(BOOL)incrementFrameIndex;
-(id)filePathForNextFrameIndex;
-(BOOL)isReadyForWritingMovie;
-(void)forceCompleted;
-(BOOL)writeToFile:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2 ;
-(void)setTimelapseUUID:(NSString *)arg1 ;
-(NSDate *)lastFrameResponseTime;
-(void)setLastFrameResponseTime:(NSDate *)arg1 ;
-(double)captureTimeInterval;
-(long long)frameIndexStride;
-(float)focusLensPosition;
-(void)setFocusLensPosition:(float)arg1 ;
-(CGSize)nominalIntermediateFrameSize;
-(void)setNominalIntermediateFrameSize:(CGSize)arg1 ;
-(BOOL)preferHEVC;
-(void)setPreferHEVC:(BOOL)arg1 ;
@end

