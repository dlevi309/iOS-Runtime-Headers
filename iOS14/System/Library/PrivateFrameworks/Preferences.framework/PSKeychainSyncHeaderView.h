/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUsesCompactLayout:(BOOL)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(BOOL)usesCompactLayout;
-(void)setTitleText:(id)arg1 ;
-(void)setDetailText:(id)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end

