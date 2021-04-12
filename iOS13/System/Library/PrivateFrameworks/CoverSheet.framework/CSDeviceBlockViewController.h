/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateText;
-(id)initWithDeviceBlockStatusProvider:(id)arg1 ;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
@end

