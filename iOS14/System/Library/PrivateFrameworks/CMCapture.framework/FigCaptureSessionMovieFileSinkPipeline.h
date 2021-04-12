/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCaptureMovieFileSinkPipeline.h>

@class NSMutableArray;

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline {

	BOOL _momentCaptureMovieRecordingEnabled;
	BOOL _recording;
	NSMutableArray* _pendingIrisRecordings;

}

@property (assign,nonatomic) BOOL momentCaptureMovieRecordingEnabled;              //@synthesize momentCaptureMovieRecordingEnabled=_momentCaptureMovieRecordingEnabled - In the implementation block
@property (assign,nonatomic) BOOL recording; 
@property (nonatomic,retain) NSMutableArray * pendingIrisRecordings;               //@synthesize pendingIrisRecordings=_pendingIrisRecordings - In the implementation block
-(NSMutableArray *)pendingIrisRecordings;
-(void)setRecording:(BOOL)arg1 ;
-(void)setMomentCaptureMovieRecordingEnabled:(BOOL)arg1 ;
-(BOOL)recording;
-(void)setPendingIrisRecordings:(NSMutableArray *)arg1 ;
-(BOOL)momentCaptureMovieRecordingEnabled;
-(void)dealloc;
@end

