/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class UIColor, NSArray, SKUIRowViewElement;

@interface SKUIRowComponent : SKUIPageComponent {

	UIColor* _backgroundColor;
	NSArray* _childComponents;
	NSArray* _columnWidths;
	long long _missingItemCount;
	long long _numberOfColumns;
	BOOL _shouldAutoFlow;

}

@property (nonatomic,readonly) SKUIRowViewElement * viewElement; 
@property (nonatomic,readonly) UIColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) NSArray * childComponents;                     //@synthesize childComponents=_childComponents - In the implementation block
@property (nonatomic,readonly) NSArray * columnWidths;                        //@synthesize columnWidths=_columnWidths - In the implementation block
@property (nonatomic,readonly) long long numberOfColumns;                     //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) BOOL shouldAutoFlow;                           //@synthesize shouldAutoFlow=_shouldAutoFlow - In the implementation block
-(UIColor *)backgroundColor;
-(long long)numberOfColumns;
-(id)description;
-(long long)componentType;
-(NSArray *)columnWidths;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithCustomPageContext:(id)arg1 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isMissingItemData;
-(id)metricsElementName;
-(id)_updateWithMissingItems:(id)arg1 ;
-(id)_childComponentWithContext:(id)arg1 ;
-(BOOL)_isChildMissingItemData:(id)arg1 ;
-(NSArray *)childComponents;
-(BOOL)shouldAutoFlow;
@end

