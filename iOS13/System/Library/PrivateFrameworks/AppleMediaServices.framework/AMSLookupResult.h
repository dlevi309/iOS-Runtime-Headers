/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSURLResult.h>

@class NSDictionary, NSDate, NSArray;

@interface AMSLookupResult : AMSURLResult {

	NSDictionary* _response;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSArray * allItems; 
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)itemForKey:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(NSArray *)allItems;
-(id)initWithResult:(id)arg1 dictionary:(id)arg2 ;
-(void)_enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2 ;
@end

