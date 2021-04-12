/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(UIImageView *)accessory;
-(void)setAccessory:(UIImageView *)arg1 ;
-(UIImage *)accessoryImage;
-(void)setAccessoryImage:(UIImage *)arg1 ;
-(id)initWithLabelText:(id)arg1 accessoryImage:(id)arg2 ;
-(void)_updateForFocusedState:(BOOL)arg1 ;
@end

