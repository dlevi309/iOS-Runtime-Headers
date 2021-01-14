/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)progress;
-(id)initWithLayer:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)dealloc;
-(void)setProgressReportDelegate:(OFPageViewController *)arg1 ;
-(OFPageViewController *)progressReportDelegate;
@end

