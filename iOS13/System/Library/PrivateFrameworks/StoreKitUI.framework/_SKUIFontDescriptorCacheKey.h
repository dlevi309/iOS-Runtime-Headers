/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(const CFStringRef)textStyle;
-(NSString *)sizeCategory;
-(id)initWithTextStyle:(const CFStringRef)arg1 sizeCategory:(id)arg2 ;
@end

