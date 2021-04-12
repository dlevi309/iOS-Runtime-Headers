/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTintColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(void)_updateShapePath;
-(void)setCanShowStopButton:(BOOL)arg1 ;
-(BOOL)canShowStopButton;
@end

