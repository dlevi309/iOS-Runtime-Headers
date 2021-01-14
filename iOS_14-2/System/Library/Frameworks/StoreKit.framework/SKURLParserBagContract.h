/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <libobjc.A.dylib/AMSURLParserBagContract.h>

@class AMSBagValue, SSURLBag, NSString;

@interface SKURLParserBagContract : NSObject <AMSURLParserBagContract> {

	SSURLBag* _bag;

}

@property (nonatomic,retain) SSURLBag * bag;                                     //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) AMSBagValue * commerceUIURLPatterns; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedContract;
-(id)init;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
-(AMSBagValue *)commerceUIURLPatterns;
@end

