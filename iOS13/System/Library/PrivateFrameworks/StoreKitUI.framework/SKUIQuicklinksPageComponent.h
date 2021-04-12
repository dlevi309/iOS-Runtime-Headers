/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIPageComponent.h>
#import <libobjc.A.dylib/SSMetricsEventFieldProvider.h>

@class NSArray, NSString;

@interface SKUIQuicklinksPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSArray* _links;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * links;                     //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(long long)componentType;
-(NSArray *)links;
-(id)valueForMetricsField:(id)arg1 ;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(id)metricsElementName;
-(void)_setLinksWithLinksArray:(id)arg1 context:(id)arg2 ;
@end

