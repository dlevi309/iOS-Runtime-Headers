/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSModalViewControllerBase.h>
#import <libobjc.A.dylib/CSModalViewDelegate.h>

@protocol CSDNDBedtimeGreetingDelegate;
@class UIColor, CLInUseAssertion, NSString;

@interface CSDNDBedtimeGreetingViewController : CSModalViewControllerBase <CSModalViewDelegate> {

	UIColor* _legibilityPrimaryColor;
	CLInUseAssertion* _weatherInUseAssertion;
	id<CSDNDBedtimeGreetingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSDNDBedtimeGreetingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSDNDBedtimeGreetingDelegate>)delegate;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)setDelegate:(id<CSDNDBedtimeGreetingDelegate>)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(void)handleSecondaryActionForView:(id)arg1 ;
-(id)initWithLegibilityPrimaryColor:(id)arg1 ;
-(id)_greetingString;
@end

