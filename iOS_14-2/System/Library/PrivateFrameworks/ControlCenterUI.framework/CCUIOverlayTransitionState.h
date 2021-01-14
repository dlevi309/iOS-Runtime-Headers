/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)stateWithType:(unsigned long long)arg1 interactive:(BOOL)arg2 progress:(double)arg3 ;
+(id)fullyDismissedState;
+(BOOL)isSignificantStatusBarTransitionFrom:(id)arg1 to:(id)arg2 ;
+(id)fullyPresentedState;
+(BOOL)isSignificantTransitionFrom:(id)arg1 to:(id)arg2 ;
-(double)progress;
-(double)nonZeroPresentationProgress;
-(BOOL)isInteractive;
-(double)clampedPresentationProgress;
-(unsigned long long)type;
-(double)snappedStatusBarPresentationProgress;
-(double)snappedPresentationProgress;
-(double)presentationProgress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithType:(unsigned long long)arg1 interactive:(BOOL)arg2 progress:(double)arg3 ;
@end

