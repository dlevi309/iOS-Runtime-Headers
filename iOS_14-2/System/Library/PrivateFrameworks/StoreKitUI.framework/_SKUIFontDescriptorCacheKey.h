/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface _SKUIFontDescriptorCacheKey : NSObject {

	const CFStringRef _textStyle;
	NSString* _sizeCategory;

}

@property (nonatomic,readonly) const CFStringRef textStyle;              //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) NSString * sizeCategory;                  //@synthesize sizeCategory=_sizeCategory - In the implementation block
-(const CFStringRef)textStyle;
-(unsigned long long)hash;
-(NSString *)sizeCategory;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTextStyle:(const CFStringRef)arg1 sizeCategory:(id)arg2 ;
@end

