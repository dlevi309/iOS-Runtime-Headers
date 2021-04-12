/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CACViewController.h>

@class CACLabeledGridOverlayView;

@interface CACLabeledGridOverlayViewController : UIViewController <CACViewController> {

	BOOL _showsElementsAsClickable;
	CACLabeledGridOverlayView* _gridOverlayView;

}

@property (nonatomic,retain) CACLabeledGridOverlayView * gridOverlayView;              //@synthesize gridOverlayView=_gridOverlayView - In the implementation block
@property (assign,nonatomic) BOOL showsNumbersInTopLeft; 
@property (nonatomic,readonly) BOOL isSmallEnoughForZooming; 
@property (assign,nonatomic) BOOL showsElementsAsClickable;                            //@synthesize showsElementsAsClickable=_showsElementsAsClickable - In the implementation block
@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(long long)zOrder;
-(void)show;
-(BOOL)isOverlay;
-(BOOL)_canShowWhileLocked;
-(void)hide;
-(void)loadView;
-(void)setShowsNumbersInTopLeft:(BOOL)arg1 ;
-(void)setShowsElementsAsClickable:(BOOL)arg1 ;
-(void)setLabeledElements:(id)arg1 ;
-(CACLabeledGridOverlayView *)gridOverlayView;
-(BOOL)showsNumbersInTopLeft;
-(BOOL)isSmallEnoughForZooming;
-(BOOL)showsElementsAsClickable;
-(void)zoomOverRegion:(CGRect)arg1 ;
-(void)setGridOverlayView:(CACLabeledGridOverlayView *)arg1 ;
@end

