/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSModalViewControllerBase.h>
#import <libobjc.A.dylib/CSModalViewDelegate.h>

@protocol SBFBlockStatusProvider;
@class SBFDeviceBlockTimer, NSString;

@interface CSDeviceBlockViewController : CSModalViewControllerBase <CSModalViewDelegate> {

	id<SBFBlockStatusProvider> _blockStatusProvider;
	SBFDeviceBlockTimer* _blockTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)presentationPriority;
-(void)_updateText;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(id)initWithDeviceBlockStatusProvider:(id)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(void)handleSecondaryActionForView:(id)arg1 ;
@end

