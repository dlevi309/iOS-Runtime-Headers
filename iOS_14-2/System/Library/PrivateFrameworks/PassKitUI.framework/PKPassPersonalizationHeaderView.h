/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableHeaderView.h>

@class PKTableHeaderView;

@interface PKPassPersonalizationHeaderView : PKTableHeaderView {

	PKTableHeaderView* _tableHeaderView;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_configureForCurrentState;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)initWithLogoImage:(id)arg1 description:(id)arg2 ;
-(void)dealloc;
@end

