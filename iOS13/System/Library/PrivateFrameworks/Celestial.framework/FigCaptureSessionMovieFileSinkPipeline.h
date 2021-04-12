/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/FigCaptureMovieFileSinkPipeline.h>

@class NSMutableArray;

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline {

	BOOL _momentCaptureMovieRecordingEnabled;
	BOOL _recording;
	NSMutableArray* _inflightIrisStills;
	NSMutableArray* _pendingIrisRecordings;

}

@property (assign,nonatomic) BOOL momentCaptureMovieRecordingEnabled;              //@synthesize momentCaptureMovieRecordingEnabled=_momentCaptureMovieRecordingEnabled - In the implementation block
@property (assign,nonatomic) BOOL recording; 
@property (nonatomic,retain) NSMutableArray * inflightIrisStills;                  //@synthesize inflightIrisStills=_inflightIrisStills - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingIrisRecordings;               //@synthesize pendingIrisRecordings=_pendingIrisRecordings - In the implementation block
-(void)dealloc;
-(void)setMomentCaptureMovieRecordingEnabled:(BOOL)arg1 ;
-(void)setRecording:(BOOL)arg1 ;
-(BOOL)recording;
-(NSMutableArray *)pendingIrisRecordings;
-(NSMutableArray *)inflightIrisStills;
-(void)setPendingIrisRecordings:(NSMutableArray *)arg1 ;
-(BOOL)momentCaptureMovieRecordingEnabled;
-(void)setInflightIrisStills:(NSMutableArray *)arg1 ;
@end

