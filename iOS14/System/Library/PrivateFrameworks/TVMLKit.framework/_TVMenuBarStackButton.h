/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSDictionary;

@interface _TVMenuBarStackButton : UIButton {

	NSDictionary* _tabBarItem;

}

@property (nonatomic,retain) NSDictionary * tabBarItem;              //@synthesize tabBarItem=_tabBarItem - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_configureSubviews;
-(NSDictionary *)tabBarItem;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTabBarItem:(NSDictionary *)arg1 ;
-(void)_updateSelectionViewForState:(unsigned long long)arg1 ;
-(void)_setSelectedOrHighlighted:(BOOL)arg1 ;
-(void)_updateImageEdgeInsets;
@end

