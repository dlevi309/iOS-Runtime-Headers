/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewElement.h>

@class UIImage, NSString, NSURL, NSAttributedString;

@interface SKUIBadgeViewElement : SKUIViewElement {

	UIImage* _fallbackImage;
	BOOL _hasValidFallbackImage;
	NSString* _resourceName;
	CGSize _size;
	NSString* _text;
	NSURL* _url;

}

@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) long long badgeType; 
@property (nonatomic,readonly) UIImage * fallbackImage;                            //@synthesize fallbackImage=_fallbackImage - In the implementation block
@property (nonatomic,readonly) NSString * resourceName;                            //@synthesize resourceName=_resourceName - In the implementation block
@property (nonatomic,readonly) CGSize size;                                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                        //@synthesize url=_url - In the implementation block
-(id)accessibilityText;
-(NSString *)resourceName;
-(CGSize)size;
-(NSAttributedString *)attributedString;
-(UIImage *)fallbackImage;
-(long long)badgeType;
-(NSURL *)URL;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end

