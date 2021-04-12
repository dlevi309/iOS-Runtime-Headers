/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString, SKUIReviewConfiguration;

@interface SKUIPostRatingOperation : ISOperation {

	NSDictionary* _responseDictionary;
	NSString* _itemID;
	long long _rating;
	SKUIReviewConfiguration* _reviewConfiguration;

}

@property (readonly) NSDictionary * responseDictionary; 
-(void)run;
-(NSDictionary *)responseDictionary;
-(id)initWithRating:(long long)arg1 forItemID:(id)arg2 reviewConfiguration:(id)arg3 ;
@end

