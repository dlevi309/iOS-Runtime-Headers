/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class UILabel, UITapGestureRecognizer, UITableView, NSString;

@interface UITableViewIndexOverlayIndicatorView : UIView {

	UILabel* _label;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITableView* _table;

}

@property (nonatomic,copy) NSString * currentText; 
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithTable:(id)arg1 ;
-(void)setCurrentText:(NSString *)arg1 ;
-(NSString *)currentText;
-(void)_tapGestureChanged:(id)arg1 ;
@end

