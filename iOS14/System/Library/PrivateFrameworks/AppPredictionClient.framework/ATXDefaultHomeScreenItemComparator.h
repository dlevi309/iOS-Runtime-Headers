/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSArray, ATXDefaultWidgetStack;

@interface ATXDefaultHomeScreenItemComparator : NSObject {

	NSArray* _galleryItems;
	ATXDefaultWidgetStack* _defaultStack;

}

@property (retain) NSArray * galleryItems;                            //@synthesize galleryItems=_galleryItems - In the implementation block
@property (retain) ATXDefaultWidgetStack * defaultStack;              //@synthesize defaultStack=_defaultStack - In the implementation block
-(NSArray *)galleryItems;
-(void)setGalleryItems:(NSArray *)arg1 ;
-(void)setDefaultStack:(ATXDefaultWidgetStack *)arg1 ;
-(ATXDefaultWidgetStack *)defaultStack;
-(void)loadDefaultItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)rankOfWidgetSuggestedInGallery:(id)arg1 ;
-(BOOL)isStackDefaultStack:(id)arg1 ;
@end

