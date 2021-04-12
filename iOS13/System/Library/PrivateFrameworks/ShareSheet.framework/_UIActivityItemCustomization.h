/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@class NSString;

@interface _UIActivityItemCustomization : NSObject {

	BOOL _enabled;
	NSString* _title;
	NSString* _footerText;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * footerText;              //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
+(id)switchCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 value:(BOOL)arg4 valueChangedHandler:(/*^block*/id)arg5 ;
+(id)pickerCustomizationWithIdentifier:(id)arg1 options:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4 valueChangedHandler:(/*^block*/id)arg5 ;
+(id)actionCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)footerText;
-(id)_initWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 ;
@end

