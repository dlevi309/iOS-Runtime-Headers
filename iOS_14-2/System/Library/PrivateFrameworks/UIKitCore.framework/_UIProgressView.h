/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UICircleProgressView, NSProgress;

@interface _UIProgressView : UIView {

	_UICircleProgressView* _progressView;
	NSProgress* _trackedProgress;

}

@property (nonatomic,retain) NSProgress * trackedProgress;              //@synthesize trackedProgress=_trackedProgress - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)_updateProgressValue;
-(void)setTrackedProgress:(NSProgress *)arg1 ;
-(NSProgress *)trackedProgress;
-(void)dealloc;
@end

