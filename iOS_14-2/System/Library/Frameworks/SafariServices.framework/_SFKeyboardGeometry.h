/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


#import <SafariServices/SafariServices-Structs.h>
@interface _SFKeyboardGeometry : NSObject {

	CGSize _sizeWithoutBar;
	CGSize _sizeWithBar;

}

@property (nonatomic,readonly) CGSize sizeWithoutBar;              //@synthesize sizeWithoutBar=_sizeWithoutBar - In the implementation block
@property (nonatomic,readonly) CGSize sizeWithBar;                 //@synthesize sizeWithBar=_sizeWithBar - In the implementation block
+(id)keyboardGeometryForInterfaceOrientation:(long long)arg1 ;
+(id)_keyboardGeometryForCurrentDeviceWithInterfaceOrientation:(long long)arg1 ;
-(CGSize)sizeWithBar;
-(CGSize)sizeWithoutBar;
-(id)_initWithSizeWithoutBar:(CGSize)arg1 sizeWithBar:(CGSize)arg2 ;
-(id)_initWithFallbackSizeForOrientation:(long long)arg1 ;
@end

