/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITextField.h>

@protocol PKAddressTextFieldDelegate;
@class PKUniqueAddressField, UIColor;

@interface PKAddressTextField : UITextField {

	BOOL _isInvalid;
	PKUniqueAddressField* _addressField;
	long long _style;
	id<PKAddressTextFieldDelegate> _addressDelegate;
	UIColor* _defaultColor;
	UIColor* _invalidColor;

}

@property (nonatomic,retain) UIColor * defaultColor;                                             //@synthesize defaultColor=_defaultColor - In the implementation block
@property (nonatomic,retain) UIColor * invalidColor;                                             //@synthesize invalidColor=_invalidColor - In the implementation block
@property (nonatomic,retain) PKUniqueAddressField * addressField;                                //@synthesize addressField=_addressField - In the implementation block
@property (assign,nonatomic) long long style;                                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<PKAddressTextFieldDelegate> addressDelegate;              //@synthesize addressDelegate=_addressDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isInvalid;                                                   //@synthesize isInvalid=_isInvalid - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)insertTextSuggestion:(id)arg1 ;
-(BOOL)isInvalid;
-(UIColor *)defaultColor;
-(void)setIsInvalid:(BOOL)arg1 showErrorGlyph:(BOOL)arg2 ;
-(PKUniqueAddressField *)addressField;
-(void)setAddressField:(PKUniqueAddressField *)arg1 ;
-(id<PKAddressTextFieldDelegate>)addressDelegate;
-(void)setAddressDelegate:(id<PKAddressTextFieldDelegate>)arg1 ;
-(void)setDefaultColor:(UIColor *)arg1 ;
-(UIColor *)invalidColor;
-(void)setInvalidColor:(UIColor *)arg1 ;
@end

