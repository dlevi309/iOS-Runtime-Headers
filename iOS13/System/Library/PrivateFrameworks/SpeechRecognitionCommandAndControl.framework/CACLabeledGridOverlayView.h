/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, CACZoomController, CACAdaptiveBackdropView, UIView;

@interface CACLabeledGridOverlayView : UIView {

	NSMutableArray* _labeledElements;
	BOOL _showsNumbersInTopLeft;
	BOOL _showsElementsAsClickable;
	BOOL _isSmallEnoughForZooming;
	CACZoomController* _zoomController;
	CACAdaptiveBackdropView* _backdrop;
	UIView* _badgesContainer;
	UIView* _contrastBadgesContainer;
	NSMutableArray* _outOfBoxBadgeViews;
	NSMutableArray* _zoomedGridBadgeViews;
	NSMutableArray* _allBadgeViews;
	NSMutableArray* _separatorViews;
	NSMutableArray* _dimmingViews;

}

@property (assign,nonatomic) BOOL isSmallEnoughForZooming;                       //@synthesize isSmallEnoughForZooming=_isSmallEnoughForZooming - In the implementation block
@property (nonatomic,retain) CACZoomController * zoomController;                 //@synthesize zoomController=_zoomController - In the implementation block
@property (nonatomic,retain) CACAdaptiveBackdropView * backdrop;                 //@synthesize backdrop=_backdrop - In the implementation block
@property (nonatomic,retain) UIView * badgesContainer;                           //@synthesize badgesContainer=_badgesContainer - In the implementation block
@property (nonatomic,retain) UIView * contrastBadgesContainer;                   //@synthesize contrastBadgesContainer=_contrastBadgesContainer - In the implementation block
@property (nonatomic,retain) NSMutableArray * outOfBoxBadgeViews;                //@synthesize outOfBoxBadgeViews=_outOfBoxBadgeViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * zoomedGridBadgeViews;              //@synthesize zoomedGridBadgeViews=_zoomedGridBadgeViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * allBadgeViews;                     //@synthesize allBadgeViews=_allBadgeViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * separatorViews;                    //@synthesize separatorViews=_separatorViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * dimmingViews;                      //@synthesize dimmingViews=_dimmingViews - In the implementation block
@property (assign,nonatomic) BOOL showsNumbersInTopLeft;                         //@synthesize showsNumbersInTopLeft=_showsNumbersInTopLeft - In the implementation block
@property (assign,nonatomic) BOOL showsElementsAsClickable;                      //@synthesize showsElementsAsClickable=_showsElementsAsClickable - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(void)setBackdrop:(CACAdaptiveBackdropView *)arg1 ;
-(CACAdaptiveBackdropView *)backdrop;
-(void)hide;
-(void)setZoomController:(CACZoomController *)arg1 ;
-(CACZoomController *)zoomController;
-(NSMutableArray *)separatorViews;
-(void)setSeparatorViews:(NSMutableArray *)arg1 ;
-(void)setShowsNumbersInTopLeft:(BOOL)arg1 ;
-(void)setShowsElementsAsClickable:(BOOL)arg1 ;
-(id)_badgeViewContainerWithFrame:(CGRect)arg1 usingContrast:(BOOL)arg2 ;
-(UIView *)contrastBadgesContainer;
-(UIView *)badgesContainer;
-(void)clearLabeledElements;
-(void)addLabeledElements:(id)arg1 ;
-(void)setBadgesContainer:(UIView *)arg1 ;
-(void)setContrastBadgesContainer:(UIView *)arg1 ;
-(BOOL)showsNumbersInTopLeft;
-(BOOL)isSmallEnoughForZooming;
-(BOOL)showsElementsAsClickable;
-(void)zoomOverRect:(CGRect)arg1 ;
-(void)setOutOfBoxBadgeViews:(NSMutableArray *)arg1 ;
-(void)setZoomedGridBadgeViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)zoomedGridBadgeViews;
-(NSMutableArray *)outOfBoxBadgeViews;
-(id)_newLineViewWithFrame:(CGRect)arg1 ;
-(void)setIsSmallEnoughForZooming:(BOOL)arg1 ;
-(NSMutableArray *)allBadgeViews;
-(void)setAllBadgeViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dimmingViews;
-(void)setDimmingViews:(NSMutableArray *)arg1 ;
@end

