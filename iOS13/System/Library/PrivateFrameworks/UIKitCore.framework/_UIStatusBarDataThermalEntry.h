/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)color;
-(void)setColor:(long long)arg1 ;
-(id)_ui_descriptionBuilder;
-(BOOL)sunlightMode;
-(void)setSunlightMode:(BOOL)arg1 ;
@end

