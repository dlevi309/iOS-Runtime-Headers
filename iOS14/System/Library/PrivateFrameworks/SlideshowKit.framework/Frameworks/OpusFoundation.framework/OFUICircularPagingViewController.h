/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OFUICircularPagingViewDelegate.h>

@class OFUICircularPagingView, NSString;

@interface OFUICircularPagingViewController : OFUIViewController <OFUICircularPagingViewDelegate> {

	OFUICircularPagingView* _circularPagingView;

}

@property (nonatomic,retain) OFUICircularPagingView * circularPagingView;              //@synthesize circularPagingView=_circularPagingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)circularPagingViewClass;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)init;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)commonInit;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewWillUnload;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(OFUICircularPagingView *)circularPagingView;
-(void)circularPagingViewDidMoveForward:(id)arg1 ;
-(void)circularPagingViewDidMoveBackward:(id)arg1 ;
-(void)setCircularPagingView:(OFUICircularPagingView *)arg1 ;
@end

