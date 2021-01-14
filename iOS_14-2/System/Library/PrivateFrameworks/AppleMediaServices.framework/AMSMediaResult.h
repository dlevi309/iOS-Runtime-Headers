/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSURLResult.h>

@class NSDictionary, NSArray;

@interface AMSMediaResult : AMSURLResult {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * responseDataItems; 
-(id)initWithResult:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(NSArray *)responseDataItems;
@end

