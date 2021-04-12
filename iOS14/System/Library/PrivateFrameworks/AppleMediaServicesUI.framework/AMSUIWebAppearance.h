/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface AMSUIWebAppearance : NSObject <NSCopying> {

	UIColor* _backgroundColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(id)secondarySystemGroupedBackgroundColor;
+(id)systemBackgroundColor;
+(id)secondarySystemBackgroundColor;
+(id)tertiarySystemBackgroundColor;
+(id)systemGroupedBackgroundColor;
+(id)tertiarySystemGroupedBackgroundColor;
+(id)tableViewAppearance;
+(id)defaultAppearance;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_convertHexString:(id)arg1 ;
-(void)updateBackgroundColorWithJSString:(id)arg1 ;
@end

