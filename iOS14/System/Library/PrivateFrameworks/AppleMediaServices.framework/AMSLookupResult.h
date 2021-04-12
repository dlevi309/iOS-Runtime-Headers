/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSArray *)allItems;
-(id)itemForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)initWithResult:(id)arg1 dictionary:(id)arg2 ;
-(void)_enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2 ;
@end

