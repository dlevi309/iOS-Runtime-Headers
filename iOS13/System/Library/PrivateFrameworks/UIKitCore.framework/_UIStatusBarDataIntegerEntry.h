/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)rawValue;
-(id)_ui_descriptionBuilder;
-(long long)displayValue;
-(BOOL)displayRawValue;
-(void)setRawValue:(long long)arg1 ;
-(void)setDisplayValue:(long long)arg1 ;
-(void)setDisplayRawValue:(BOOL)arg1 ;
@end

