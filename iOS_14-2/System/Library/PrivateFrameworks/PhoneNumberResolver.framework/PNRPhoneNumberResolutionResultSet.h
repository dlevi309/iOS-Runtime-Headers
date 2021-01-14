/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhoneNumberResolver.framework/PhoneNumberResolver
*/


#import <PhoneNumberResolver/PhoneNumberResolver-Structs.h>
@class NSMutableDictionary;

@interface PNRPhoneNumberResolutionResultSet : NSObject {

	NSMutableDictionary* _results;
	os_unfair_lock_s _resultsLock;

}
-(id)init;
-(id)description;
-(void)enumerateResolutionsUsingBlock:(/*^block*/id)arg1 ;
-(void)setResult:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)setError:(id)arg1 forPhoneNumber:(id)arg2 ;
@end

