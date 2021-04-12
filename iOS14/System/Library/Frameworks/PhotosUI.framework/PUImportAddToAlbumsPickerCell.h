/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol PXDisplayCollection;
@class UIImage, UIButton;

@interface PUImportAddToAlbumsPickerCell : UITableViewCell {

	BOOL _isPerformingUpdate;
	BOOL _showingSelectionMark;
	unsigned long long _type;
	id<PXDisplayCollection> _collection;
	UIImage* _thumbail;
	UIButton* _checkMarkButton;

}

@property (assign,nonatomic,__weak) UIButton * checkMarkButton;                 //@synthesize checkMarkButton=_checkMarkButton - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id<PXDisplayCollection> collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) UIImage * thumbail;                              //@synthesize thumbail=_thumbail - In the implementation block
-(UIImage *)thumbail;
-(id<PXDisplayCollection>)collection;
-(void)setCollection:(id<PXDisplayCollection>)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)isSelectable;
-(void)layoutSubviews;
-(unsigned long long)type;
-(void)_configureCell;
-(UIButton *)checkMarkButton;
-(void)setCheckMarkButton:(UIButton *)arg1 ;
-(id)mutableChangeObject;
-(void)didAddSubview:(id)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setThumbnail:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

