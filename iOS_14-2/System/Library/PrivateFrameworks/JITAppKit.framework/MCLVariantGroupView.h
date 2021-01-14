/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface MCLVariantGroupView : UIView {

	NSMutableArray* _buttons;
	NSMutableArray* _buttonConstraints;
	long long _selectedIndex;
	BOOL _actionVariant;
	Class _buttonClass;
	long long _buttonType;
	long long _variantCount;
	long long _variantsPerLine;

}

@property (nonatomic,retain) Class buttonClass;                      //@synthesize buttonClass=_buttonClass - In the implementation block
@property (assign,nonatomic) long long buttonType;                   //@synthesize buttonType=_buttonType - In the implementation block
@property (assign,nonatomic) long long variantCount;                 //@synthesize variantCount=_variantCount - In the implementation block
@property (assign,nonatomic) long long variantsPerLine;              //@synthesize variantsPerLine=_variantsPerLine - In the implementation block
@property (assign,nonatomic) BOOL actionVariant;                     //@synthesize actionVariant=_actionVariant - In the implementation block
-(void)setButtonType:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(void)clearVariants;
-(Class)buttonClass;
-(long long)buttonType;
-(id)createVariantButton:(Class)arg1 type:(long long)arg2 ;
-(void)selectVariant:(id)arg1 ;
-(void)selectItemAtIndex:(long long)arg1 ;
-(void)setButtonClass:(Class)arg1 ;
-(long long)variantCount;
-(void)setVariantCount:(long long)arg1 ;
-(long long)variantsPerLine;
-(void)setVariantsPerLine:(long long)arg1 ;
-(BOOL)actionVariant;
-(void)setActionVariant:(BOOL)arg1 ;
@end

