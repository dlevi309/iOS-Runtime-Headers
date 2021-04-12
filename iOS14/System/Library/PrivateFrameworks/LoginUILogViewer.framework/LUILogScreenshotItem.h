/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVisibleRange:(NSRange)arg1 ;
-(NSRange)visibleRange;
-(UIImage *)screenshotImage;
-(void)setScreenshotImage:(UIImage *)arg1 ;
-(NSDate *)screenshotDate;
-(void)setScreenshotDate:(NSDate *)arg1 ;
@end

