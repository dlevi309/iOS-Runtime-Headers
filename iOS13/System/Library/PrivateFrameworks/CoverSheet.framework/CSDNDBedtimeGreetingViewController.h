/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSModalViewControllerBase.h>
#import <libobjc.A.dylib/CSModalViewDelegate.h>
#import <libobjc.A.dylib/CSTouchPassThroughContainerViewDelegate.h>

@protocol CSDNDBedtimeGreetingDelegate;
@class UIColor, CLInUseAssertion, NSString;

@interface CSDNDBedtimeGreetingViewController : CSModalViewControllerBase <CSModalViewDelegate, CSTouchPassThroughContainerViewDelegate> {

	UIColor* _legibilityPrimaryColor;
	CLInUseAssertion* _weatherInUseAssertion;
	id<CSDNDBedtimeGreetingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSDNDBedtimeGreetingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CSDNDBedtimeGreetingDelegate>)delegate;
-(void)setDelegate:(id<CSDNDBedtimeGreetingDelegate>)arg1 ;
-(void)loadView;
-(void)aggregateAppearance:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
-(id)initWithLegibilityPrimaryColor:(id)arg1 ;
-(void)handleTouchEventForView:(id)arg1 ;
-(id)_greetingString;
@end

