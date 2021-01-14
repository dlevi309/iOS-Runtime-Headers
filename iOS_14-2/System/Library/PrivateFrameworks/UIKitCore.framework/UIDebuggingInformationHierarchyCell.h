/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UICollectionViewCell.h>

@protocol UIDebuggingInformationHierarchyCellDelegate;
@class UIButton, UILabel, NSIndexPath, NSLayoutConstraint, NSString;

@interface UIDebuggingInformationHierarchyCell : UICollectionViewCell {

	UIButton* _disclosureButton;
	UILabel* _mainLabel;
	UIButton* _infoButton;
	NSIndexPath* _indexPath;
	BOOL _collapsedBeneath;
	NSLayoutConstraint* _disclosureButtonAvailableConstraint;
	NSLayoutConstraint* _disclosureButtonUnavailableConstraint;
	BOOL _disclosureIndicatorHidden;
	NSString* _name;
	id<UIDebuggingInformationHierarchyCellDelegate> _delegate;

}

@property (nonatomic,retain) NSString * name;                                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton; 
@property (assign,nonatomic,__weak) id<UIDebuggingInformationHierarchyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (assign,nonatomic) BOOL disclosureIndicatorHidden;                                               //@synthesize disclosureIndicatorHidden=_disclosureIndicatorHidden - In the implementation block
-(id<UIDebuggingInformationHierarchyCellDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)prepareForReuse;
-(NSString *)name;
-(void)setDelegate:(id<UIDebuggingInformationHierarchyCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIButton *)infoButton;
-(void)setName:(NSString *)arg1 ;
-(void)deliverToggle;
-(void)displayDetailsForCell;
-(void)setDisclosureIndicatorHidden:(BOOL)arg1 ;
-(BOOL)disclosureIndicatorHidden;
@end

