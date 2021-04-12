/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@protocol OS_dispatch_source;
@class SKUICounterViewElement, SKUIImageView, NSNumberFormatter, UILabel, SKUICounterTimeView, NSObject, NSString;

@interface SKUICounterView : SKUIViewReuseView <SKUIViewElementView> {

	UIEdgeInsets _contentInset;
	SKUICounterViewElement* _counterElement;
	SKUIImageView* _imageView;
	NSNumberFormatter* _numberFormatter;
	UILabel* _numberView;
	SKUICounterTimeView* _timeView;
	NSObject*<OS_dispatch_source> _updateTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)_stopUpdateTimer;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)_startUpdateTimer;
-(void)setAlpha:(double)arg1 ;
-(void)dealloc;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_addNumberViewWithViewElement:(id)arg1 context:(id)arg2 ;
-(void)_addTimeViewWithViewElement:(id)arg1 context:(id)arg2 ;
-(void)_reloadUpdateTimer;
-(void)_reloadNumberValue;
-(unsigned long long)_visibleTimeFieldsForDateFormat:(long long)arg1 ;
-(void)_updateTimerAction;
@end

