/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

