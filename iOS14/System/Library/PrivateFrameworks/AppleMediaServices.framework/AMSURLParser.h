/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class NSString;

@interface AMSURLParser : NSObject <AMSBagConsumer_Project, AMSBagConsumer> {

	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(id)initWithBagContract:(id)arg1 ;
-(id)isCommerceUIURL:(id)arg1 ;
-(id)bagContract;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)_commerceUIArrayForKey:(id)arg1 ;
-(BOOL)_matchURL:(id)arg1 toPatterns:(id)arg2 ;
-(id)_defaultWebAllowedForURL:(id)arg1 ;
-(id)_dynamicUIAllowedForURL:(id)arg1 ;
-(id)_legacyWebAllowedForURL:(id)arg1 ;
-(void)_waitForPromises:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)typeForCommerceUIURL:(id)arg1 ;
-(id)typeForURL:(id)arg1 ;
@end

