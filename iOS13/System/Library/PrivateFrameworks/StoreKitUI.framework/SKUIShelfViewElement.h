/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIShelfViewElement : SKUIViewElement {

	long long _numberOfRows;
	NSString* _slideshowTitle;
	/*^block*/id _shelfItemViewElementValidator;

}

@property (nonatomic,readonly) long long numberOfRows;                    //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,readonly) NSString * slideshowTitle;                 //@synthesize slideshowTitle=_slideshowTitle - In the implementation block
@property (nonatomic,copy) id shelfItemViewElementValidator;              //@synthesize shelfItemViewElementValidator=_shelfItemViewElementValidator - In the implementation block
-(long long)numberOfRows;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(long long)pageComponentType;
-(NSString *)slideshowTitle;
-(id)shelfItemViewElementValidator;
-(void)setShelfItemViewElementValidator:(id)arg1 ;
@end

