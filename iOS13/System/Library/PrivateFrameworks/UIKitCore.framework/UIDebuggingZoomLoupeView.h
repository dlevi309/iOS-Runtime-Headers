/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UIDebuggingZoomDelegate;
@interface UIDebuggingZoomLoupeView : UIView {

	id<UIDebuggingZoomDelegate> _delegate;
	CGPoint _currentlyInspectedPoint;

}

@property (assign,nonatomic) CGPoint currentlyInspectedPoint;                          //@synthesize currentlyInspectedPoint=_currentlyInspectedPoint - In the implementation block
@property (assign,nonatomic,__weak) id<UIDebuggingZoomDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<UIDebuggingZoomDelegate>)delegate;
-(void)setDelegate:(id<UIDebuggingZoomDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGPoint)currentlyInspectedPoint;
-(void)setCurrentlyInspectedPoint:(CGPoint)arg1 ;
@end

