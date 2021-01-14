/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FigCaptureMovieFileRecordingSettings, BWIrisMovieInfo;

@interface BWPendingIrisRecordingRequest : NSObject <NSCopying> {

	FigCaptureMovieFileRecordingSettings* _settings;
	long long _enqueuedHostTime;
	SCD_Struct_BW8 _momentCaptureMovieRecordingMasterEndTime;
	BOOL _pairedRequestCreated;
	BWIrisMovieInfo* _irisMovieInfo;

}

@property (nonatomic,readonly) FigCaptureMovieFileRecordingSettings * settings;                    //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) long long enqueuedHostTime;                                           //@synthesize enqueuedHostTime=_enqueuedHostTime - In the implementation block
@property (nonatomic,retain) BWIrisMovieInfo * irisMovieInfo;                                      //@synthesize irisMovieInfo=_irisMovieInfo - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 momentCaptureMovieRecordingMasterEndTime;              //@synthesize momentCaptureMovieRecordingMasterEndTime=_momentCaptureMovieRecordingMasterEndTime - In the implementation block
@property (assign,getter=isPairedRequestCreated,nonatomic) BOOL pairedRequestCreated;              //@synthesize pairedRequestCreated=_pairedRequestCreated - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
+(id)irisRecordingRequestWithFigCaptureMovieFileRecordingSettings:(id)arg1 ;
-(void)setMomentCaptureMovieRecordingMasterEndTime:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)momentCaptureMovieRecordingMasterEndTime;
-(id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg1 ;
-(long long)enqueuedHostTime;
-(BWIrisMovieInfo *)irisMovieInfo;
-(BOOL)isPairedRequestCreated;
-(id)description;
-(void)setPairedRequestCreated:(BOOL)arg1 ;
-(void)setIrisMovieInfo:(BWIrisMovieInfo *)arg1 ;
-(void)setEnqueuedHostTime:(long long)arg1 ;
-(FigCaptureMovieFileRecordingSettings *)settings;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

