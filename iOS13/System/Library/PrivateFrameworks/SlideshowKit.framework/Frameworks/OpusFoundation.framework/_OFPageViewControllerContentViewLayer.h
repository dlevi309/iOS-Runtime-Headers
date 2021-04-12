/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <QuartzCore/CALayer.h>

@class OFPageViewController;

@interface _OFPageViewControllerContentViewLayer : CALayer {

	OFPageViewController* _progressReportDelegate;
	double _progress;

}

@property (assign,nonatomic) OFPageViewController * progressReportDelegate;              //@synthesize progressReportDelegate=_progressReportDelegate - In the implementation block
@property (assign,nonatomic) double progress;                                            //@synthesize progress=_progress - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)dealloc;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setProgressReportDelegate:(OFPageViewController *)arg1 ;
-(OFPageViewController *)progressReportDelegate;
@end

