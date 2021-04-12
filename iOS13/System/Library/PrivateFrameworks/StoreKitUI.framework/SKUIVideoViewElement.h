/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIImageViewElement, NSArray;

@interface SKUIVideoViewElement : SKUIViewElement {

	char _enabled;
	long long _itemIdentifier;
	long long _playbackStyle;
	SKUIImageViewElement* _thumbnailImage;
	long long _kind;

}

@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,readonly) long long itemIdentifier;                           //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) long long kind;                                     //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) long long playbackStyle;                            //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
-(long long)itemIdentifier;
-(long long)kind;
-(BOOL)isEnabled;
-(NSArray *)assets;
-(long long)playbackStyle;
-(SKUIImageViewElement *)thumbnailImage;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end

