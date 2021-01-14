/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/_UICollectionViewOutlineCell.h>

@protocol PXNavigationListItem, PUOutlineCellDelegate;
@class UIImage, NSString;

@interface PUOutlineCell : _UICollectionViewOutlineCell {

	UIImage* _image;
	NSString* _text;
	id<PXNavigationListItem> _item;
	id<PUOutlineCellDelegate> _delegate;
	long long _style;

}

@property (nonatomic,retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id<PXNavigationListItem> item;                          //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<PUOutlineCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long style;                                        //@synthesize style=_style - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id<PUOutlineCellDelegate>)delegate;
-(id<PXNavigationListItem>)item;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setItem:(id<PXNavigationListItem>)arg1 ;
-(void)setDelegate:(id<PUOutlineCellDelegate>)arg1 ;
-(NSString *)text;
-(void)setStyle:(long long)arg1 ;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(BOOL)_hasEditSpecificAccessories;
-(id)_editingConfigurationForState:(unsigned long long)arg1 ;
-(void)_setAdditionalPropertiesForConfiguration:(id)arg1 state:(unsigned long long)arg2 ;
-(void)_renameItem:(id)arg1 toTitle:(id)arg2 ;
-(long long)style;
@end

