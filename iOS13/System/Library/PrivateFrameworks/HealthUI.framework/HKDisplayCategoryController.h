/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)allDisplayCategories;
-(void)_initializeDisplayCategories;
@end

