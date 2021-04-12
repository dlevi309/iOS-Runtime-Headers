/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView;

@interface _UIDocumentPickerManagementViewControllerCell : UITableViewCell {

	UIImageView* _newlyAddedView;

}

@property (nonatomic,retain) UIImageView * newlyAddedView;              //@synthesize newlyAddedView=_newlyAddedView - In the implementation block
@property (assign,nonatomic) BOOL showNewlyAdded; 
-(id)_dotImage;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShowNewlyAdded:(BOOL)arg1 ;
-(void)setNewlyAddedView:(UIImageView *)arg1 ;
-(UIImageView *)newlyAddedView;
-(BOOL)showNewlyAdded;
@end

