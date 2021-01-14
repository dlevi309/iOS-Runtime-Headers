/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class HFItem, NSString, NSArray, UILabel, UIStackView, UIImageView, CNAvatarViewController;

@interface HUFaceCropTableCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _useTintColor;
	HFItem* _item;
	NSString* _titleText;
	NSArray* _constraints;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIStackView* _labelsStack;
	UIImageView* _faceCropView;
	CNAvatarViewController* _avatarViewController;

}

@property (nonatomic,retain) NSArray * constraints;                                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIStackView * labelsStack;                                        //@synthesize labelsStack=_labelsStack - In the implementation block
@property (nonatomic,retain) UIImageView * faceCropView;                                       //@synthesize faceCropView=_faceCropView - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * avatarViewController;                    //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                             //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (assign,nonatomic) BOOL useTintColor;                                                //@synthesize useTintColor=_useTintColor - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(UILabel *)titleLabel;
-(NSArray *)constraints;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(CNAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(NSString *)titleText;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)_updateTitleColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)faceCropView;
-(void)setUseTintColor:(BOOL)arg1 ;
-(UIStackView *)labelsStack;
-(BOOL)useTintColor;
-(void)setLabelsStack:(UIStackView *)arg1 ;
-(void)setFaceCropView:(UIImageView *)arg1 ;
@end

