/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIEditorialComponent, SKUILayoutCache;

@interface SKUIEditorialLayout : NSObject {

	SKUIEditorialComponent* _editorial;
	long long _landscapeLinkLayoutIndex;
	long long _landscapeTextLayoutIndex;
	long long _landscapeTitleLayoutIndex;
	double _landscapeWidth;
	long long _portraitLinkLayoutIndex;
	long long _portraitTextLayoutIndex;
	long long _portraitTitleLayoutIndex;
	double _portraitWidth;
	SKUILayoutCache* _textLayoutCache;

}

@property (nonatomic,readonly) SKUIEditorialComponent * editorialComponent;              //@synthesize editorial=_editorial - In the implementation block
@property (nonatomic,readonly) SKUILayoutCache * layoutCache;                            //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
-(SKUILayoutCache *)layoutCache;
-(void)enqueueLayoutRequests;
-(id)initWithEditorial:(id)arg1 layoutCache:(id)arg2 ;
-(void)setLayoutWidth:(double)arg1 forOrientation:(long long)arg2 ;
-(id)bodyTextLayoutForOrientation:(long long)arg1 ;
-(double)layoutHeightForOrientation:(long long)arg1 expanded:(BOOL)arg2 ;
-(id)titleTextLayoutForOrientation:(long long)arg1 ;
-(id)linkLayoutForOrientation:(long long)arg1 ;
-(id)_bodyTextLayoutRequestWithTotalWidth:(double)arg1 ;
-(id)_titleTextLayoutRequestWithTotalWidth:(double)arg1 ;
-(id)_linkLayoutRequestWithTotalWidth:(double)arg1 ;
-(SKUIEditorialComponent *)editorialComponent;
@end

