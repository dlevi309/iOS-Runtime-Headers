/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<UIDebuggingZoomDelegate>)delegate;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<UIDebuggingZoomDelegate>)arg1 ;
-(CGPoint)currentlyInspectedPoint;
-(void)setCurrentlyInspectedPoint:(CGPoint)arg1 ;
@end

