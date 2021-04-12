/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CNQuickActionButton;

@interface CNQuickActionCell : UICollectionViewCell {

	BOOL _showTitle;
	BOOL _showBackgroundPlatter;
	CNQuickActionButton* _button;

}

@property (nonatomic,retain) CNQuickActionButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL showTitle;                            //@synthesize showTitle=_showTitle - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;                //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CNQuickActionButton *)button;
-(void)setButton:(CNQuickActionButton *)arg1 ;
-(BOOL)showBackgroundPlatter;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(void)setShowTitle:(BOOL)arg1 ;
-(BOOL)showTitle;
@end

