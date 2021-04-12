/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSTimer, NSDate;

@interface VUINowPlayingTimerFeatureInfo : NSObject {

	NSTimer* _repeatingTimer;
	NSTimer* _oneTimeTimer;
	NSDate* _startDate;
	NSDate* _backgroundedDate;

}

@property (assign,nonatomic,__weak) NSTimer * repeatingTimer;              //@synthesize repeatingTimer=_repeatingTimer - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * oneTimeTimer;                //@synthesize oneTimeTimer=_oneTimeTimer - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * backgroundedDate;                    //@synthesize backgroundedDate=_backgroundedDate - In the implementation block
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSTimer *)repeatingTimer;
-(void)setRepeatingTimer:(NSTimer *)arg1 ;
-(NSTimer *)oneTimeTimer;
-(void)setOneTimeTimer:(NSTimer *)arg1 ;
-(NSDate *)backgroundedDate;
-(void)setBackgroundedDate:(NSDate *)arg1 ;
@end

