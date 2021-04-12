/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UILabel, UIImageView;

@interface CNStarkHeaderPlatterView : UIView {

	NSString* _labelText;
	UIImage* _accessoryImage;
	UILabel* _label;
	UIImageView* _accessory;

}

@property (nonatomic,retain) UILabel * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * accessory;               //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,copy) NSString * labelText;                    //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,retain) UIImage * accessoryImage;              //@synthesize accessoryImage=_accessoryImage - In the implementation block
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIImageView *)accessory;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(UIImage *)accessoryImage;
-(void)setAccessoryImage:(UIImage *)arg1 ;
-(id)initWithLabelText:(id)arg1 accessoryImage:(id)arg2 ;
-(void)setAccessory:(UIImageView *)arg1 ;
-(void)_updateForFocusedState:(BOOL)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

