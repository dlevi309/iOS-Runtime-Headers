/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@interface _MPDownloadProgressRingView : UIView {

	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
+(Class)layerClass;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_updateShapePath;
@end

