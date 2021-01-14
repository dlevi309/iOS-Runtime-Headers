/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSTimer *)repeatingTimer;
-(void)setRepeatingTimer:(NSTimer *)arg1 ;
-(NSTimer *)oneTimeTimer;
-(void)setOneTimeTimer:(NSTimer *)arg1 ;
-(NSDate *)backgroundedDate;
-(void)setBackgroundedDate:(NSDate *)arg1 ;
@end

