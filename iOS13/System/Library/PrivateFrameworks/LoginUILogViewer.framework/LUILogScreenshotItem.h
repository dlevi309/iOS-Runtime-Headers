/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/


#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
@class UIImage, NSDate;

@interface LUILogScreenshotItem : NSObject {

	UIImage* _screenshotImage;
	NSDate* _screenshotDate;
	NSRange _visibleRange;

}

@property (nonatomic,retain) UIImage * screenshotImage;              //@synthesize screenshotImage=_screenshotImage - In the implementation block
@property (assign,nonatomic) NSRange visibleRange;                   //@synthesize visibleRange=_visibleRange - In the implementation block
@property (nonatomic,retain) NSDate * screenshotDate;                //@synthesize screenshotDate=_screenshotDate - In the implementation block
-(NSRange)visibleRange;
-(void)setVisibleRange:(NSRange)arg1 ;
-(UIImage *)screenshotImage;
-(void)setScreenshotImage:(UIImage *)arg1 ;
-(NSDate *)screenshotDate;
-(void)setScreenshotDate:(NSDate *)arg1 ;
@end

