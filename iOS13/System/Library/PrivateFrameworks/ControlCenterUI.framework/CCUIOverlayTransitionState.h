/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CCUIOverlayTransitionState : NSObject <NSCopying> {

	BOOL _interactive;
	unsigned long long _type;
	double _progress;
	double _presentationProgress;
	double _clampedPresentationProgress;
	double _nonZeroPresentationProgress;
	double _snappedPresentationProgress;

}

@property (nonatomic,readonly) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive;              //@synthesize interactive=_interactive - In the implementation block
@property (nonatomic,readonly) double presentationProgress;                        //@synthesize presentationProgress=_presentationProgress - In the implementation block
@property (nonatomic,readonly) double clampedPresentationProgress;                 //@synthesize clampedPresentationProgress=_clampedPresentationProgress - In the implementation block
@property (nonatomic,readonly) double nonZeroPresentationProgress;                 //@synthesize nonZeroPresentationProgress=_nonZeroPresentationProgress - In the implementation block
@property (nonatomic,readonly) double snappedPresentationProgress;                 //@synthesize snappedPresentationProgress=_snappedPresentationProgress - In the implementation block
+(BOOL)isSignificantTransitionFrom:(id)arg1 to:(id)arg2 ;
+(BOOL)isSignificantStatusBarTransitionFrom:(id)arg1 to:(id)arg2 ;
+(id)stateWithType:(unsigned long long)arg1 interactive:(BOOL)arg2 progress:(double)arg3 ;
+(id)fullyPresentedState;
+(id)fullyDismissedState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(double)progress;
-(BOOL)isInteractive;
-(double)presentationProgress;
-(double)snappedStatusBarPresentationProgress;
-(double)clampedPresentationProgress;
-(double)snappedPresentationProgress;
-(double)nonZeroPresentationProgress;
-(id)_initWithType:(unsigned long long)arg1 interactive:(BOOL)arg2 progress:(double)arg3 ;
@end

