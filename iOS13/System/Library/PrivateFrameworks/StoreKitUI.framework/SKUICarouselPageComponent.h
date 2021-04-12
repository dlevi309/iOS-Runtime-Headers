/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIPageComponent.h>
#import <libobjc.A.dylib/SSMetricsEventFieldProvider.h>

@class NSArray, SKUICarouselViewElement, NSString;

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSArray* _carouselItems;
	double _cycleInterval;
	long long _missingItemCount;

}

@property (nonatomic,readonly) NSArray * carouselItems;                            //@synthesize carouselItems=_carouselItems - In the implementation block
@property (nonatomic,readonly) SKUICarouselViewElement * viewElement; 
@property (nonatomic,readonly) double cycleInterval;                               //@synthesize cycleInterval=_cycleInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)componentType;
-(id)valueForMetricsField:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isMissingItemData;
-(id)metricsElementName;
-(void)updateWithMissingItems:(id)arg1 ;
-(NSArray *)carouselItems;
-(double)cycleInterval;
@end

