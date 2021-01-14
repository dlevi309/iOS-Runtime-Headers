/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, SKUIViewElementLayoutContext, SKUIViewElement;

@interface SKUIProductLockupLayout : NSObject {

	long long _bottomLeftLayoutStyle;
	NSMutableArray* _bottomLeftViewElements;
	NSMutableArray* _bottomRightViewElements;
	SKUIViewElementLayoutContext* _layoutContext;
	NSMutableArray* _middleLeftViewElements;
	SKUIViewElement* _productImageElement;
	NSMutableArray* _topLeftViewElements;
	NSMutableArray* _topRightViewElements;

}

@property (nonatomic,readonly) long long bottomLeftLayoutStyle;              //@synthesize bottomLeftLayoutStyle=_bottomLeftLayoutStyle - In the implementation block
-(id)initWithLockup:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(double)metadataWidthForWidth:(double)arg1 ;
-(id)viewElementsForSection:(long long)arg1 ;
-(SKUIProductLockupLayoutSizing)layoutWidthsForWidth:(double)arg1 ;
-(SKUIProductLockupLayoutSizing)sizingToFitWidth:(double)arg1 ;
-(void)enumerateViewElementsForWidth:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)bottomLeftLayoutStyle;
-(BOOL)hasBottomRightElementWithRightAlignment;
-(double)topPaddingForViewElement:(id)arg1 ;
-(double)bottomPaddingForViewElement:(id)arg1 ;
-(CGSize)_sizeForVerticalViewElements:(id)arg1 width:(double)arg2 ;
-(CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 ;
-(CGSize)_sizeForSegmentedControl:(id)arg1 width:(double)arg2 ;
@end

