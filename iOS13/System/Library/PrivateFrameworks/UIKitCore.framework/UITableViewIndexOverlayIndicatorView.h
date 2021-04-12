/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)_tapGestureChanged:(id)arg1 ;
-(id)initWithTable:(id)arg1 ;
-(NSString *)currentText;
-(void)setCurrentText:(NSString *)arg1 ;
@end

