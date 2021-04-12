/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer;

@interface DOCDeterminateProgressRingView : UIView {

	CALayer* _squareLayer;
	BOOL _canShowStopButton;
	double _progress;

}

@property (assign,nonatomic) double progress;                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL canShowStopButton;              //@synthesize canShowStopButton=_canShowStopButton - In the implementation block
+(Class)layerClass;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_updateShapePath;
-(void)setCanShowStopButton:(BOOL)arg1 ;
-(BOOL)canShowStopButton;
@end

