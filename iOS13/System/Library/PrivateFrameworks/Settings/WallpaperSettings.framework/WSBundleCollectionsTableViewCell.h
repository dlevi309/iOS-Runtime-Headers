/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/

#import <WallpaperSettings/WallpaperSettings-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WSBundleCollectionOptionViewDelegate.h>

@protocol WSBundleCollectionsTableViewCellDelegate;
@class UIStackView, NSMutableArray, NSString;

@interface WSBundleCollectionsTableViewCell : UITableViewCell <WSBundleCollectionOptionViewDelegate> {

	id<WSBundleCollectionsTableViewCellDelegate> _delegate;
	UIStackView* __stackView;
	NSMutableArray* __optionViews;
	CGSize _canonicalButtonSize;

}

@property (nonatomic,retain) UIStackView * _stackView;                                                  //@synthesize _stackView=__stackView - In the implementation block
@property (nonatomic,retain) NSMutableArray * _optionViews;                                             //@synthesize _optionViews=__optionViews - In the implementation block
@property (assign,nonatomic,__weak) id<WSBundleCollectionsTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize canonicalButtonSize;                                                //@synthesize canonicalButtonSize=_canonicalButtonSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WSBundleCollectionsTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<WSBundleCollectionsTableViewCellDelegate>)arg1 ;
-(UIStackView *)_stackView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_configureView;
-(void)set_stackView:(UIStackView *)arg1 ;
-(void)setCanonicalButtonSize:(CGSize)arg1 ;
-(void)addViewForBundleCollection:(id)arg1 ;
-(CGSize)canonicalButtonSize;
-(NSMutableArray *)_optionViews;
-(void)userDidTapBundleCollectionOptionView:(id)arg1 ;
-(void)set_optionViews:(NSMutableArray *)arg1 ;
@end

