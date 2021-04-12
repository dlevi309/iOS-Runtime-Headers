/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <UIKitCore/UITableView.h>

@protocol TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver;
@interface TKTonePickerTableView : UITableView {

	id<TKTonePickerTableViewLayoutMarginsObserver> _layoutMarginsObserver;
	id<TKTonePickerTableViewSeparatorObserver> _separatorObserver;

}

@property (assign,nonatomic,__weak) id<TKTonePickerTableViewLayoutMarginsObserver> layoutMarginsObserver;              //@synthesize layoutMarginsObserver=_layoutMarginsObserver - In the implementation block
@property (assign,nonatomic,__weak) id<TKTonePickerTableViewSeparatorObserver> separatorObserver;                      //@synthesize separatorObserver=_separatorObserver - In the implementation block
-(void)layoutMarginsDidChange;
-(void)setSeparatorColor:(id)arg1 ;
-(void)layoutSubviews;
-(id<TKTonePickerTableViewLayoutMarginsObserver>)layoutMarginsObserver;
-(id<TKTonePickerTableViewSeparatorObserver>)separatorObserver;
-(void)_handleSeparatorColorDidChange;
-(void)setLayoutMarginsObserver:(id<TKTonePickerTableViewLayoutMarginsObserver>)arg1 ;
-(void)setSeparatorObserver:(id<TKTonePickerTableViewSeparatorObserver>)arg1 ;
@end

