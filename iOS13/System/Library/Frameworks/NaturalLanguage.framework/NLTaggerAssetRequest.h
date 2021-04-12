/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@class NSString;

@interface NLTaggerAssetRequest : NSObject {

	NSString* _language;
	NSString* _tagScheme;
	/*^block*/id _completionHandler;

}
+(void)checkAssetRequests;
-(BOOL)isFulfilled;
-(void)completeWithResult:(long long)arg1 error:(id)arg2 ;
-(id)initWithLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)waitForFulfillment;
@end

