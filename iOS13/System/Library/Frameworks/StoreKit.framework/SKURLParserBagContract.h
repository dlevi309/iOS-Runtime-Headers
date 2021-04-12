/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <libobjc.A.dylib/AMSURLParserBagContract.h>

@class AMSBagValue, SSURLBag, NSString;

@interface SKURLParserBagContract : NSObject <AMSURLParserBagContract> {

	SSURLBag* _bag;

}

@property (nonatomic,retain) SSURLBag * bag;                                     //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSBagValue * commerceUIURLPatterns; 
+(id)sharedContract;
-(id)init;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
-(AMSBagValue *)commerceUIURLPatterns;
@end

