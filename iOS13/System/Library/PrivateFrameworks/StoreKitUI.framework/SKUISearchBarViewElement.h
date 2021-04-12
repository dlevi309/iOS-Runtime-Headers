/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIInputViewElement.h>

@class NSString, SKUIViewElementText;

@interface SKUISearchBarViewElement : SKUIInputViewElement {

	NSString* _accessoryText;
	SKUIViewElementText* _defaultText;
	NSString* _placeholderString;
	NSString* _searchHintsURLString;
	NSString* _trendingSearchURLString;

}

@property (nonatomic,readonly) NSString * accessoryText;                        //@synthesize accessoryText=_accessoryText - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * defaultText;               //@synthesize defaultText=_defaultText - In the implementation block
@property (nonatomic,readonly) NSString * placeholderString;                    //@synthesize placeholderString=_placeholderString - In the implementation block
@property (nonatomic,readonly) NSString * searchHintsURLString;                 //@synthesize searchHintsURLString=_searchHintsURLString - In the implementation block
@property (nonatomic,readonly) NSString * trendingSearchURLString;              //@synthesize trendingSearchURLString=_trendingSearchURLString - In the implementation block
-(unsigned long long)elementType;
-(NSString *)placeholderString;
-(SKUIViewElementText *)defaultText;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)accessoryText;
-(NSString *)searchHintsURLString;
-(NSString *)trendingSearchURLString;
-(long long)pageComponentType;
@end

