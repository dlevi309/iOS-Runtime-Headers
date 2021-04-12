/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTrackedProgress:(NSProgress *)arg1 ;
-(void)_updateProgressValue;
-(NSProgress *)trackedProgress;
@end

