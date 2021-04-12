/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSDictionary;

@interface _TVMenuBarStackButton : UIButton {

	NSDictionary* _tabBarItem;

}

@property (nonatomic,retain) NSDictionary * tabBarItem;              //@synthesize tabBarItem=_tabBarItem - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_configureSubviews;
-(NSDictionary *)tabBarItem;
-(void)setTabBarItem:(NSDictionary *)arg1 ;
-(void)_updateSelectionViewForState:(unsigned long long)arg1 ;
-(void)_setSelectedOrHighlighted:(BOOL)arg1 ;
-(void)_updateImageEdgeInsets;
@end

