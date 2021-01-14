/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewCell.h>

@protocol PXNavigationListItem;
@interface PXNavigationListCell : UITableViewCell {

	BOOL _enabled;
	id<PXNavigationListItem> _listItem;
	long long _separatorStyleWorkaround57597636;

}

@property (nonatomic,retain) id<PXNavigationListItem> listItem;                       //@synthesize listItem=_listItem - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long separatorStyleWorkaround57597636;              //@synthesize separatorStyleWorkaround57597636=_separatorStyleWorkaround57597636 - In the implementation block
+(id)detailTextLabelFont;
+(id)textLabelFont;
+(id)_symbolConfigurationForFont:(id)arg1 ;
-(BOOL)enabled;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_updateCellStyle;
-(id)_currentCellColor;
-(void)setSeparatorStyleWorkaround57597636:(long long)arg1 ;
-(long long)separatorStyleWorkaround57597636;
-(void)setListItem:(id<PXNavigationListItem>)arg1 ;
-(void)layoutSubviews;
-(id<PXNavigationListItem>)listItem;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

