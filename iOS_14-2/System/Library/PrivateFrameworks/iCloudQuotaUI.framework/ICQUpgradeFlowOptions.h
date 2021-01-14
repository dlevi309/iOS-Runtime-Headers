/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor;

@interface ICQUpgradeFlowOptions : NSObject <NSCopying, NSSecureCoding> {

	UIColor* _navigationBarTintColor;
	UIColor* _buttonTintColor;

}

@property (nonatomic,copy) UIColor * navigationBarTintColor;              //@synthesize navigationBarTintColor=_navigationBarTintColor - In the implementation block
@property (nonatomic,copy) UIColor * buttonTintColor;                     //@synthesize buttonTintColor=_buttonTintColor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)flowOptionsFromData:(id)arg1 ;
-(id)serializedData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setNavigationBarTintColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setButtonTintColor:(UIColor *)arg1 ;
-(UIColor *)buttonTintColor;
-(UIColor *)navigationBarTintColor;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

