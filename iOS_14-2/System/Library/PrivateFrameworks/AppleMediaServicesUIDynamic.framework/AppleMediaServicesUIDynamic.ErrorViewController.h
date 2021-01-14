/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
*/

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/AMSUIDAirplaneModeInquiryDelegate.h>

@class UINavigationItem;

@interface AppleMediaServicesUIDynamic.ErrorViewController : AMSUICommonViewController <AMSUIDAirplaneModeInquiryDelegate> {

	 automaticRetry;
	 action;
	 button;
	 errorMessage;
	 errorTitle;
	 airplaneModeInquiry;
	 cellularDataInquiry;
	 networkInquiry;
	 networkObservation;
	 $__lazy_storage_$_contentUnavailableView;

}

@property (readonly,nonatomic) UINavigationItem * navigationItem; 
-(UINavigationItem *)navigationItem;
-(void)viewWillLayoutSubviews;
-(id)init;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)airplaneModeInquiryDidObserveChange:(id)arg1 ;
@end

