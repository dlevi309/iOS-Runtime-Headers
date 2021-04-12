/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(void)setSeparatorColor:(id)arg1 ;
-(id<TKTonePickerTableViewLayoutMarginsObserver>)layoutMarginsObserver;
-(id<TKTonePickerTableViewSeparatorObserver>)separatorObserver;
-(void)_handleSeparatorColorDidChange;
-(void)setLayoutMarginsObserver:(id<TKTonePickerTableViewLayoutMarginsObserver>)arg1 ;
-(void)setSeparatorObserver:(id<TKTonePickerTableViewSeparatorObserver>)arg1 ;
@end

