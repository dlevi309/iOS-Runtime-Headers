/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIImage;

@interface _UISliderControlStateContent : NSObject {

	UIImage* _thumb;
	UIImage* _minTrack;
	UIImage* _maxTrack;

}

@property (nonatomic,retain) UIImage * thumb;                 //@synthesize thumb=_thumb - In the implementation block
@property (nonatomic,retain) UIImage * minTrack;              //@synthesize minTrack=_minTrack - In the implementation block
@property (nonatomic,retain) UIImage * maxTrack;              //@synthesize maxTrack=_maxTrack - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
-(UIImage *)thumb;
-(UIImage *)minTrack;
-(void)setThumb:(UIImage *)arg1 ;
-(void)setMinTrack:(UIImage *)arg1 ;
-(UIImage *)maxTrack;
-(void)setMaxTrack:(UIImage *)arg1 ;
-(BOOL)isEmpty;
@end

