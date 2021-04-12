/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableHeaderView.h>

@class PKPaymentSetupProduct, NSArray, NSDictionary;

@interface PKReaderModeHeaderView : PKTableHeaderView {

	PKPaymentSetupProduct* _product;
	NSArray* _resourceKeys;
	long long _context;
	NSDictionary* _readerModeResources;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id)_titleForState:(unsigned long long)arg1 ;
-(void)_configureForCurrentState;
-(id)_subtitleForState:(unsigned long long)arg1 ;
-(id)initWithState:(unsigned long long)arg1 context:(long long)arg2 product:(id)arg3 ;
@end

