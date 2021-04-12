/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICellAccessoryConfiguration.h>

@class NSString, UIFont;

@interface _UICellAccessoryConfigurationBadge : _UICellAccessoryConfiguration {

	BOOL _adjustsFontForContentSizeCategory;
	NSString* _text;
	UIFont* _font;

}

@property (nonatomic,copy,readonly) NSString * text;                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                                       //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;              //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(id)initWithText:(id)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setFont:(UIFont *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_identifier;
-(NSString *)text;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)_systemType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIFont *)font;
@end

