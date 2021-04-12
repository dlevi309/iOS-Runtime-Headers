/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXTextEffectFrame.h>

@class JFXOverlayEffectTransforms;

@interface JFXOverlayEffectFrame : JFXTextEffectFrame {

	long long _trackingType;

}

@property (assign,nonatomic) long long trackingType;                               //@synthesize trackingType=_trackingType - In the implementation block
@property (nonatomic,retain) JFXOverlayEffectTransforms * transforms; 
@property (nonatomic,readonly) BOOL isTrackedButTrackingUnavailable; 
+(id)frameWithEffect:(id)arg1 relativeToSize:(CGSize)arg2 origin:(int)arg3 time:(SCD_Struct_JF3)arg4 forcePosterFrame:(BOOL)arg5 includeDropShadow:(BOOL)arg6 includeTextFrames:(BOOL)arg7 ;
-(id)description;
-(long long)trackingType;
-(void)setTrackingType:(long long)arg1 ;
-(id)initWithEffect:(id)arg1 relativeToSize:(CGSize)arg2 origin:(int)arg3 time:(SCD_Struct_JF3)arg4 forcePosterFrame:(BOOL)arg5 includeDropShadow:(BOOL)arg6 includeTextFrames:(BOOL)arg7 ;
-(BOOL)isTrackedButTrackingUnavailable;
@end

