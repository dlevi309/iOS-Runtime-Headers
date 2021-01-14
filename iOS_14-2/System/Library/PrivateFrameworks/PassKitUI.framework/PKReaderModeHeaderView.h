/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(void)_configureForCurrentState;
-(id)_subtitleForState:(unsigned long long)arg1 ;
-(id)initWithState:(unsigned long long)arg1 context:(long long)arg2 product:(id)arg3 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)_titleForState:(unsigned long long)arg1 ;
@end

