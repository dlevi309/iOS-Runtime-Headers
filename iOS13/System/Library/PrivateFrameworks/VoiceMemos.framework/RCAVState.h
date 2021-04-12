/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RCAVState : NSObject <NSSecureCoding, NSCopying> {

	long long _AVCaptureState;
	long long _AVPreviewState;

}

@property (assign,nonatomic) long long AVCaptureState;                                  //@synthesize AVCaptureState=_AVCaptureState - In the implementation block
@property (assign,nonatomic) long long AVPreviewState;                                  //@synthesize AVPreviewState=_AVPreviewState - In the implementation block
@property (nonatomic,readonly) BOOL isCaptureInactive; 
@property (nonatomic,readonly) BOOL isCapturePreparing; 
@property (nonatomic,readonly) BOOL isCaptureActive; 
@property (nonatomic,readonly) BOOL isCapturePaused; 
@property (nonatomic,readonly) BOOL isCaptureActiveOrPreparing; 
@property (nonatomic,readonly) BOOL isCaptureActiveOrPreparingOrResumable; 
@property (nonatomic,readonly) BOOL isPreviewInactive; 
@property (nonatomic,readonly) BOOL isPreviewPreparing; 
@property (nonatomic,readonly) BOOL isPreviewActive; 
@property (nonatomic,readonly) BOOL isPreviewActiveOrPreparing; 
+(BOOL)supportsSecureCoding;
+(id)inactiveState;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPreviewActive;
-(long long)AVPreviewState;
-(void)setAVPreviewState:(long long)arg1 ;
-(long long)AVCaptureState;
-(void)setAVCaptureState:(long long)arg1 ;
-(id)_assetStateByTransitioningItermediateStatesToGoalStates;
-(id)assetStateByChangingToCaptureState:(long long)arg1 ;
-(id)_assetStateByChangingToCaptureState:(long long)arg1 previewState:(long long)arg2 ;
-(id)assetStateByChangingToPreviewState:(long long)arg1 ;
-(BOOL)isCaptureActiveOrPreparing;
-(BOOL)isCapturePaused;
-(BOOL)isCapturePreparing;
-(BOOL)isCaptureActive;
-(BOOL)isPreviewPreparing;
-(id)assetStateByCaptureState;
-(id)assetStateByTogglingPreview;
-(id)assetStateByChangingToPreviewRate:(float)arg1 ;
-(BOOL)isCaptureInactive;
-(BOOL)isPreviewInactive;
-(BOOL)isCaptureActiveOrPreparingOrResumable;
-(BOOL)isPreviewActiveOrPreparing;
@end

