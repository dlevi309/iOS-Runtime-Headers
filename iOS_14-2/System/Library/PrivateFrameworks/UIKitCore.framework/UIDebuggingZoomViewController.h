/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIDebuggingZoomDelegate.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class UIDebuggingZoomLoupeView, UIDebuggingZoomLineView, UIPanGestureRecognizer, NSObject, UILabel, UISegmentedControl, UIView;

@interface UIDebuggingZoomViewController : UIViewController <UIDebuggingZoomDelegate, UIDebuggingInformationViewController> {

	BOOL _useViewForEdges;
	unsigned long long _currentDirection;
	UIDebuggingZoomLoupeView* _loupe;
	UIDebuggingZoomLineView* _lineView;
	UIPanGestureRecognizer* _pan;
	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_queue> _queue;
	CGImageRef _image;
	UILabel* _label;
	UILabel* _distanceLabel;
	UISegmentedControl* _directionSegmentedControl;
	UIView* _lastViewSeen;

}

@property (assign,nonatomic) unsigned long long currentDirection;                         //@synthesize currentDirection=_currentDirection - In the implementation block
@property (nonatomic,retain) UIDebuggingZoomLoupeView * loupe;                            //@synthesize loupe=_loupe - In the implementation block
@property (nonatomic,retain) UIDebuggingZoomLineView * lineView;                          //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * pan;                                //@synthesize pan=_pan - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                          //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) CGImageRef image;                                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UILabel * label;                                             //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * distanceLabel;                                     //@synthesize distanceLabel=_distanceLabel - In the implementation block
@property (nonatomic,retain) UISegmentedControl * directionSegmentedControl;              //@synthesize directionSegmentedControl=_directionSegmentedControl - In the implementation block
@property (assign,nonatomic) BOOL useViewForEdges;                                        //@synthesize useViewForEdges=_useViewForEdges - In the implementation block
@property (nonatomic,retain) UIView * lastViewSeen;                                       //@synthesize lastViewSeen=_lastViewSeen - In the implementation block
-(UIPanGestureRecognizer *)pan;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(UIDebuggingZoomLoupeView *)loupe;
-(void)setImage:(CGImageRef)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CGImageRef)image;
-(UIDebuggingZoomLineView *)lineView;
-(void)viewDidLoad;
-(void)setLoupe:(UIDebuggingZoomLoupeView *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setPan:(UIPanGestureRecognizer *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)toggleMode:(id)arg1 ;
-(CGImageRef)newCaptureSnapshotAtRect:(CGRect)arg1 window:(id)arg2 ;
-(void)setLineView:(UIDebuggingZoomLineView *)arg1 ;
-(UILabel *)label;
-(void)setDistanceLabel:(UILabel *)arg1 ;
-(void)toggleDirection:(id)arg1 ;
-(UILabel *)distanceLabel;
-(void)setDirectionSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)setUseViewForEdges:(BOOL)arg1 ;
-(void)setCurrentDirection:(unsigned long long)arg1 ;
-(void)updateGesture:(id)arg1 ;
-(BOOL)useViewForEdges;
-(id)drawViewLinesAtPoint:(CGPoint)arg1 forView:(id)arg2 ;
-(id)drawLinesAtPoint:(CGPoint)arg1 ;
-(unsigned long long)currentDirection;
-(void)toggleMeasuring:(id)arg1 ;
-(void)setLastViewSeen:(UIView *)arg1 ;
-(UISegmentedControl *)directionSegmentedControl;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)lastViewSeen;
@end

