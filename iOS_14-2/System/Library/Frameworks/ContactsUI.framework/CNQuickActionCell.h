/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNQuickActionButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setButton:(CNQuickActionButton *)arg1 ;
-(BOOL)showTitle;
-(BOOL)showBackgroundPlatter;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(void)setShowTitle:(BOOL)arg1 ;
@end

