/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(NSString *)slideshowTitle;
-(id)shelfItemViewElementValidator;
-(void)setShelfItemViewElementValidator:(id)arg1 ;
@end

