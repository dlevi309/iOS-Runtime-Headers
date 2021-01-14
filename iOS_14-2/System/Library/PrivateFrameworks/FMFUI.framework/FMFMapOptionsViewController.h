/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <FMFUI/FMFUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol FMFMapOptionsViewControllerDelegate;
@class UIButton, UIView, UISegmentedControl, MKMapAttribution;

@interface FMFMapOptionsViewController : UIViewController {

	id<FMFMapOptionsViewControllerDelegate> _delegate;
	UIButton* _mapAttributionButton;
	UIView* _topTapView;
	UISegmentedControl* _segmentedControl;
	UIView* _bottomWhitePane;
	MKMapAttribution* _mapAttribution;

}

@property (nonatomic,retain) UIButton * mapAttributionButton;                                      //@synthesize mapAttributionButton=_mapAttributionButton - In the implementation block
@property (nonatomic,retain) UIView * topTapView;                                                  //@synthesize topTapView=_topTapView - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                                //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UIView * bottomWhitePane;                                             //@synthesize bottomWhitePane=_bottomWhitePane - In the implementation block
@property (nonatomic,retain) MKMapAttribution * mapAttribution;                                    //@synthesize mapAttribution=_mapAttribution - In the implementation block
@property (assign,nonatomic,__weak) id<FMFMapOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<FMFMapOptionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<FMFMapOptionsViewControllerDelegate>)arg1 ;
-(void)_dismiss:(id)arg1 ;
-(void)viewDidLoad;
-(void)awakeFromNib;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(CGSize)paneSize;
-(UIView *)topTapView;
-(UIButton *)mapAttributionButton;
-(MKMapAttribution *)mapAttribution;
-(void)setMapAttribution:(MKMapAttribution *)arg1 ;
-(void)openInMaps:(id)arg1 ;
-(void)attributionButtonPressed:(id)arg1 ;
-(void)segmentedControlChanged:(id)arg1 ;
-(void)setMapAttributionButton:(UIButton *)arg1 ;
-(void)setTopTapView:(UIView *)arg1 ;
-(UIView *)bottomWhitePane;
-(void)setBottomWhitePane:(UIView *)arg1 ;
@end

