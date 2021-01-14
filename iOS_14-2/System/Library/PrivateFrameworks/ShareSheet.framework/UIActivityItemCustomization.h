/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@class NSString;

@interface UIActivityItemCustomization : NSObject {

	BOOL _enabled;
	NSString* _title;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
+(id)switchCustomizationWithTitle:(id)arg1 identifier:(id)arg2 value:(BOOL)arg3 valueChangedHandler:(/*^block*/id)arg4 ;
+(id)pickerCustomizationWithTitle:(id)arg1 identifier:(id)arg2 options:(id)arg3 selectedOptionIndex:(long long)arg4 valueChangedHandler:(/*^block*/id)arg5 ;
+(id)actionCustomizationWithTitle:(id)arg1 identifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_initWithTitle:(id)arg1 identifier:(id)arg2 ;
-(NSString *)identifier;
-(NSString *)title;
@end

