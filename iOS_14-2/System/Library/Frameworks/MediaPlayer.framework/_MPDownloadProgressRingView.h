/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@interface _MPDownloadProgressRingView : UIView {

	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
+(Class)layerClass;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(void)_updateShapePath;
@end

