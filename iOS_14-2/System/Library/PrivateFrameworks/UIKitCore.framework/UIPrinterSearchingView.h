/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIPrintMessageAndSpinnerView;

@interface UIPrinterSearchingView : UIView {

	BOOL _constraintsSet;
	_UIPrintMessageAndSpinnerView* _messageAndSpinner;

}

@property (assign,nonatomic,__weak) _UIPrintMessageAndSpinnerView * messageAndSpinner;              //@synthesize messageAndSpinner=_messageAndSpinner - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)searchTimeout;
-(_UIPrintMessageAndSpinnerView *)messageAndSpinner;
-(void)setMessageAndSpinner:(_UIPrintMessageAndSpinnerView *)arg1 ;
-(void)setSearching:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)updateFont;
@end

