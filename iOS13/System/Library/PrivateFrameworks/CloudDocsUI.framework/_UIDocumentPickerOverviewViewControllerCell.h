/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView;

@interface _UIDocumentPickerOverviewViewControllerCell : UITableViewCell {

	UIImageView* _iconView;
	UIImageView* _newlyAddedView;

}

@property (nonatomic,retain) UIImageView * iconView;                    //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIImageView * newlyAddedView;              //@synthesize newlyAddedView=_newlyAddedView - In the implementation block
@property (assign,nonatomic) BOOL showNewlyAdded; 
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(id)_dotImage;
-(void)setShowNewlyAdded:(BOOL)arg1 ;
-(void)setNewlyAddedView:(UIImageView *)arg1 ;
-(UIImageView *)newlyAddedView;
-(BOOL)showNewlyAdded;
@end

