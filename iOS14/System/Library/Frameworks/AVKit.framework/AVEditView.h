/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIMovieScrubberDataSource.h>
#import <UIKit/UIMovieScrubberDelegate.h>

@protocol AVEditViewDataSource, AVEditViewDelegate;
@class UIMovieScrubber, NSString;

@interface AVEditView : UIView <UIMovieScrubberDataSource, UIMovieScrubberDelegate> {

	BOOL _prefersThumbVisible;
	BOOL _scrubbing;
	BOOL _trimming;
	id<AVEditViewDataSource> _dataSource;
	id<AVEditViewDelegate> _delegate;
	UIMovieScrubber* _movieScrubber;

}

@property (retain) UIMovieScrubber * movieScrubber;                                   //@synthesize movieScrubber=_movieScrubber - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                       //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign,getter=isTrimming,nonatomic) BOOL trimming;                         //@synthesize trimming=_trimming - In the implementation block
@property (assign,nonatomic,__weak) id<AVEditViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AVEditViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL prefersThumbVisible;                                //@synthesize prefersThumbVisible=_prefersThumbVisible - In the implementation block
@property (nonatomic,readonly) double trimStartTime; 
@property (nonatomic,readonly) double trimEndTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(id<AVEditViewDelegate>)delegate;
-(id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4 ;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)isTrimming;
-(id<AVEditViewDataSource>)dataSource;
-(void)setDelegate:(id<AVEditViewDelegate>)arg1 ;
-(void)setDataSource:(id<AVEditViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)movieScrubber:(id)arg1 valueDidChange:(double)arg2 ;
-(void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2 ;
-(void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2 ;
-(void)movieScrubberWillBeginRequestingThumbnails:(id)arg1 ;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg1 ;
-(double)movieScrubberDuration:(id)arg1 ;
-(void)reloadData;
-(void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 ;
-(void)setThumbnailImage:(CGImageRef)arg1 forTimestamp:(id)arg2 ;
-(double)movieScrubberThumbnailAspectRatio:(id)arg1 ;
-(double)trimEndTime;
-(double)trimStartTime;
-(void)userObservationGestureRecognizerFired:(id)arg1 ;
-(void)setPrefersThumbVisible:(BOOL)arg1 ;
-(void)setTrimming:(BOOL)arg1 ;
-(BOOL)prefersThumbVisible;
-(UIMovieScrubber *)movieScrubber;
-(void)setMovieScrubber:(UIMovieScrubber *)arg1 ;
-(BOOL)isScrubbing;
-(void)setScrubbing:(BOOL)arg1 ;
@end

