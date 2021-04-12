/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SSMetricsEventFieldProvider.h>

@class SKUIViewElement, NSString;

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider> {

	long long _metricsLocationPosition;
	SKUIViewElement* _viewElement;

}

@property (assign,setter=_setMetricsLocationPosition:,nonatomic) long long metricsLocationPosition;              //@synthesize metricsLocationPosition=_metricsLocationPosition - In the implementation block
@property (nonatomic,readonly) SKUIViewElement * viewElement;                                                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) long long componentType; 
@property (getter=isMissingItemData,nonatomic,readonly) BOOL missingItemData; 
@property (nonatomic,readonly) NSString * metricsElementName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)componentType;
-(id)valueForMetricsField:(id)arg1 ;
-(SKUIViewElement *)viewElement;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isMissingItemData;
-(NSString *)metricsElementName;
-(void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(long long)metricsLocationPosition;
-(void)_setMetricsLocationPosition:(long long)arg1 ;
@end

