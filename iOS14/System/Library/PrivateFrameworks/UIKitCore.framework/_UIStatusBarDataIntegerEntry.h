/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataIntegerEntry : _UIStatusBarDataEntry {

	BOOL _displayRawValue;
	long long _rawValue;
	long long _displayValue;

}

@property (assign,nonatomic) long long rawValue;                  //@synthesize rawValue=_rawValue - In the implementation block
@property (assign,nonatomic) long long displayValue;              //@synthesize displayValue=_displayValue - In the implementation block
@property (assign,nonatomic) BOOL displayRawValue;                //@synthesize displayRawValue=_displayRawValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_ui_descriptionBuilder;
-(BOOL)displayRawValue;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)rawValue;
-(void)setRawValue:(long long)arg1 ;
-(void)setDisplayValue:(long long)arg1 ;
-(void)setDisplayRawValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)displayValue;
-(BOOL)isEqual:(id)arg1 ;
@end

