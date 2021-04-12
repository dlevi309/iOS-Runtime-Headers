/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/MFReusableIdentifiable.h>

@class UILabel, UIButton, NSString;

@interface MFPhotoPickerSectionHeaderView : UICollectionReusableView <MFReusableIdentifiable> {

	UILabel* _titleLabel;
	UIButton* _actionButton;

}

@property (nonatomic,retain) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;               //@synthesize actionButton=_actionButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reusableIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addAllPhotosTarget:(id)arg1 action:(SEL)arg2 ;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
@end

