/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataThermalEntry : _UIStatusBarDataEntry {

	BOOL _sunlightMode;
	long long _color;

}

@property (assign,nonatomic) long long color;                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL sunlightMode;              //@synthesize sunlightMode=_sunlightMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_ui_descriptionBuilder;
-(long long)color;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setColor:(long long)arg1 ;
-(void)setSunlightMode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)sunlightMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

