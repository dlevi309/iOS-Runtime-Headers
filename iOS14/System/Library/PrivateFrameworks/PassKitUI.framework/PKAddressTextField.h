/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITextField.h>

@protocol PKAddressTextFieldDelegate;
@class PKUniqueAddressField, PKContactFieldConfiguration, UIColor;

@interface PKAddressTextField : UITextField {

	BOOL _isInvalid;
	PKUniqueAddressField* _addressField;
	PKContactFieldConfiguration* _contactFieldConfiguration;
	long long _style;
	id<PKAddressTextFieldDelegate> _addressDelegate;
	UIColor* _defaultColor;
	UIColor* _invalidColor;

}

@property (nonatomic,retain) UIColor * defaultColor;                                               //@synthesize defaultColor=_defaultColor - In the implementation block
@property (nonatomic,retain) UIColor * invalidColor;                                               //@synthesize invalidColor=_invalidColor - In the implementation block
@property (nonatomic,retain) PKUniqueAddressField * addressField;                                  //@synthesize addressField=_addressField - In the implementation block
@property (nonatomic,retain) PKContactFieldConfiguration * contactFieldConfiguration;              //@synthesize contactFieldConfiguration=_contactFieldConfiguration - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<PKAddressTextFieldDelegate> addressDelegate;                //@synthesize addressDelegate=_addressDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isInvalid;                                                     //@synthesize isInvalid=_isInvalid - In the implementation block
-(void)insertTextSuggestion:(id)arg1 ;
-(BOOL)isInvalid;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setIsInvalid:(BOOL)arg1 showErrorGlyph:(BOOL)arg2 ;
-(void)setAddressField:(PKUniqueAddressField *)arg1 ;
-(PKContactFieldConfiguration *)contactFieldConfiguration;
-(void)setContactFieldConfiguration:(PKContactFieldConfiguration *)arg1 ;
-(id<PKAddressTextFieldDelegate>)addressDelegate;
-(void)setAddressDelegate:(id<PKAddressTextFieldDelegate>)arg1 ;
-(UIColor *)invalidColor;
-(void)setInvalidColor:(UIColor *)arg1 ;
-(UIColor *)defaultColor;
-(void)setDefaultColor:(UIColor *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(PKUniqueAddressField *)addressField;
@end

