/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSMutableArray, NSMutableDictionary;

@interface HKDisplayCategoryController : NSObject {

	NSMutableArray* _displayCategories;
	NSMutableDictionary* _displayCategoriesByCategoryID;

}
+(id)sharedInstance;
-(id)init;
-(id)categoryWithID:(long long)arg1 ;
-(void)_initializeDisplayCategories;
-(id)allDisplayCategories;
@end

