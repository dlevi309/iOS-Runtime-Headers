/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface ASCOfferTheme : NSObject <NSSecureCoding, NSCopying> {

	UIColor* _titleBackgroundColor;
	UIColor* _titleTextColor;
	UIColor* _subtitleTextColor;
	UIColor* _iconTintColor;
	UIColor* _progressColor;

}

@property (nonatomic,readonly) UIColor * titleBackgroundColor;              //@synthesize titleBackgroundColor=_titleBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * titleTextColor;                    //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * subtitleTextColor;                 //@synthesize subtitleTextColor=_subtitleTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * iconTintColor;                     //@synthesize iconTintColor=_iconTintColor - In the implementation block
@property (nonatomic,readonly) UIColor * progressColor;                     //@synthesize progressColor=_progressColor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)grayTheme;
+(id)blueTheme;
+(id)loadingTheme;
+(id)confirmationForTheme:(id)arg1 ;
-(UIColor *)subtitleTextColor;
-(void)encodeWithCoder:(id)arg1 ;
-(UIColor *)titleBackgroundColor;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTitleBackgroundColor:(id)arg1 titleTextColor:(id)arg2 subtitleTextColor:(id)arg3 iconTintColor:(id)arg4 progressColor:(id)arg5 ;
-(UIColor *)titleTextColor;
-(UIColor *)progressColor;
-(UIColor *)iconTintColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

