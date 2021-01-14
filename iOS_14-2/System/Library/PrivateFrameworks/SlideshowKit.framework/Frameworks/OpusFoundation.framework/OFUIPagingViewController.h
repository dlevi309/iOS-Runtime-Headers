/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OFUIPagingViewDelegate.h>

@class OFUIPagingView, NSString;

@interface OFUIPagingViewController : OFUIViewController <OFUIPagingViewDelegate> {

	OFUIPagingView* _pagingView;

}

@property (nonatomic,retain) OFUIPagingView * pagingView;              //@synthesize pagingView=_pagingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)pagingViewClass;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidUnload;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewWillUnload;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(OFUIPagingView *)pagingView;
-(long long)numberOfPagesInPagingView:(id)arg1 ;
-(id)viewForPageInPagingView:(id)arg1 atIndex:(long long)arg2 ;
-(void)setPagingView:(OFUIPagingView *)arg1 ;
@end

