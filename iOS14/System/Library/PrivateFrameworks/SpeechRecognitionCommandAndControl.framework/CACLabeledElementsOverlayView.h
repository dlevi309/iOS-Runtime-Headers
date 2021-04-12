/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UIView;

@interface CACLabeledElementsOverlayView : UIView {

	NSMutableArray* _labeledElements;
	BOOL _positionAtLeft;
	BOOL _displayElementRectangles;
	UIView* _badgesContainer;
	UIView* _contrastBadgesContainer;

}

@property (assign,nonatomic) BOOL displayElementRectangles;                 //@synthesize displayElementRectangles=_displayElementRectangles - In the implementation block
@property (nonatomic,retain) UIView * badgesContainer;                      //@synthesize badgesContainer=_badgesContainer - In the implementation block
@property (nonatomic,retain) UIView * contrastBadgesContainer;              //@synthesize contrastBadgesContainer=_contrastBadgesContainer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_badgeViewContainerWithFrame:(CGRect)arg1 usingContrast:(BOOL)arg2 ;
-(UIView *)contrastBadgesContainer;
-(UIView *)badgesContainer;
-(void)setDisplayElementRectangles:(BOOL)arg1 ;
-(BOOL)displayElementRectangles;
-(id)_viewShowingDebuggingRect:(CGRect)arg1 ;
-(void)clearLabeledElements;
-(void)addLabeledElements:(id)arg1 ;
-(void)setBadgesContainer:(UIView *)arg1 ;
-(void)setContrastBadgesContainer:(UIView *)arg1 ;
@end

