/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setNavigationBarTintColor:(UIColor *)arg1 ;
-(id)serializedData;
-(UIColor *)navigationBarTintColor;
-(void)setButtonTintColor:(UIColor *)arg1 ;
-(UIColor *)buttonTintColor;
@end

