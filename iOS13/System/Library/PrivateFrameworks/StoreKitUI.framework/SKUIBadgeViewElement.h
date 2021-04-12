/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)size;
-(NSURL *)URL;
-(NSAttributedString *)attributedString;
-(id)accessibilityText;
-(NSString *)resourceName;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(UIImage *)fallbackImage;
-(long long)badgeType;
@end

