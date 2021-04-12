/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel;

@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	BOOL _usesCompactLayout;

}

@property (assign,nonatomic) BOOL usesCompactLayout;              //@synthesize usesCompactLayout=_usesCompactLayout - In the implementation block
-(void)layoutSubviews;
-(void)setTitleText:(id)arg1 ;
-(void)setDetailText:(id)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setUsesCompactLayout:(BOOL)arg1 ;
-(BOOL)usesCompactLayout;
@end

