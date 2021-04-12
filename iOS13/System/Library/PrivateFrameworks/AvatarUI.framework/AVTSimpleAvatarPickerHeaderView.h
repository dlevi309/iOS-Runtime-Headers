/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class AVTCircularButton, NSString, UIImageSymbolConfiguration;

@interface AVTSimpleAvatarPickerHeaderView : UICollectionReusableView {

	AVTCircularButton* _button;
	/*^block*/id _buttonPressedBlock;
	NSString* _currentSymbolName;
	UIImageSymbolConfiguration* _plusSymbolConfiguration;
	UIImageSymbolConfiguration* _ellipsisSymbolConfiguration;

}

@property (nonatomic,retain) NSString * currentSymbolName;                                          //@synthesize currentSymbolName=_currentSymbolName - In the implementation block
@property (nonatomic,retain) UIImageSymbolConfiguration * plusSymbolConfiguration;                  //@synthesize plusSymbolConfiguration=_plusSymbolConfiguration - In the implementation block
@property (nonatomic,retain) UIImageSymbolConfiguration * ellipsisSymbolConfiguration;              //@synthesize ellipsisSymbolConfiguration=_ellipsisSymbolConfiguration - In the implementation block
@property (nonatomic,readonly) AVTCircularButton * button;                                          //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id buttonPressedBlock;                                                   //@synthesize buttonPressedBlock=_buttonPressedBlock - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(AVTCircularButton *)button;
-(void)buttonPressed:(id)arg1 ;
-(void)setupLayout;
-(void)updateForEditMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageSymbolConfiguration *)ellipsisSymbolConfiguration;
-(UIImageSymbolConfiguration *)plusSymbolConfiguration;
-(void)updateWithSymbolNamed:(id)arg1 configuration:(id)arg2 animated:(BOOL)arg3 ;
-(NSString *)currentSymbolName;
-(void)setCurrentSymbolName:(NSString *)arg1 ;
-(id)buttonPressedBlock;
-(void)setButtonPressedBlock:(id)arg1 ;
-(void)setPlusSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(void)setEllipsisSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
@end

