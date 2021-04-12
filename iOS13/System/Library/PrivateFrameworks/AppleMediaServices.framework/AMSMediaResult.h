/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

