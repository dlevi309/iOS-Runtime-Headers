/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HFPosterFrameImageObserver.h>

@class UIActivityIndicatorView, CALayer, HMCameraClip;

@interface HUPosterFrameView : UIView <HFPosterFrameImageObserver> {

	BOOL _loading;
	BOOL _requestInProgress;
	BOOL _shouldShowLineSeparator;
	UIActivityIndicatorView* _inProgressSpinner;
	CALayer* _posterFrameLayer;
	CALayer* _lineSeparator;
	HMCameraClip* _clip;
	double _timeOffset;

}

@property (nonatomic,retain) UIActivityIndicatorView * inProgressSpinner;                    //@synthesize inProgressSpinner=_inProgressSpinner - In the implementation block
@property (nonatomic,retain) CALayer * posterFrameLayer;                                     //@synthesize posterFrameLayer=_posterFrameLayer - In the implementation block
@property (nonatomic,retain) CALayer * lineSeparator;                                        //@synthesize lineSeparator=_lineSeparator - In the implementation block
@property (assign,nonatomic,__weak) HMCameraClip * clip;                                     //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic) double timeOffset;                                              //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                  //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isRequestInProgress,nonatomic) BOOL requestInProgress;              //@synthesize requestInProgress=_requestInProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLineSeparator;                                   //@synthesize shouldShowLineSeparator=_shouldShowLineSeparator - In the implementation block
+(id)posterFrameView;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(double)timeOffset;
-(HMCameraClip *)clip;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
-(void)setClip:(HMCameraClip *)arg1 ;
-(void)manager:(id)arg1 didFindImage:(id)arg2 atTimeOffset:(double)arg3 forClip:(id)arg4 ;
-(void)setRequestInProgress:(BOOL)arg1 ;
-(void)displayImageForClip:(id)arg1 atTimeOffset:(double)arg2 ;
-(void)setShouldShowLineSeparator:(BOOL)arg1 ;
-(BOOL)isRequestInProgress;
-(UIActivityIndicatorView *)inProgressSpinner;
-(CALayer *)lineSeparator;
-(CALayer *)posterFrameLayer;
-(BOOL)shouldShowLineSeparator;
-(void)setInProgressSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setPosterFrameLayer:(CALayer *)arg1 ;
-(void)setLineSeparator:(CALayer *)arg1 ;
@end

