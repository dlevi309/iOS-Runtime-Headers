/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, SSVPlatformContext, NSObject, NSArray, NSNumber, SSBag;

@interface SSVPlatformRequestOperation : NSOperation {

	NSMutableDictionary* _additionalHeaderFields;
	NSMutableDictionary* _additionalParameters;
	NSString* _caller;
	SSVPlatformContext* _context;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _itemIdentifiers;
	NSArray* _bundleIdentifiers;
	NSString* _imageProfile;
	NSString* _keyProfile;
	long long _personalizationStyle;
	/*^block*/id _responseBlock;
	NSString* _storeFrontSuffix;
	NSNumber* _timeoutInterval;
	NSString* _userAgent;
	BOOL _shouldSuppressCookies;
	BOOL _shouldSuppressUserInfo;
	SSBag* _bag;

}

@property (copy) NSArray * itemIdentifiers; 
@property (copy) NSArray * bundleIdentifiers; 
@property (copy) NSString * imageProfile; 
@property (copy) NSString * keyProfile; 
@property (assign) long long personalizationStyle; 
@property (copy) NSString * storeFrontSuffix; 
@property (copy) NSNumber * timeoutInterval; 
@property (assign) BOOL shouldSuppressCookies;                  //@synthesize shouldSuppressCookies=_shouldSuppressCookies - In the implementation block
@property (assign) BOOL shouldSuppressUserInfo;                 //@synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo - In the implementation block
@property (copy) id responseBlock; 
@property (nonatomic,retain) SSBag * bag;                       //@synthesize bag=_bag - In the implementation block
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(NSString *)imageProfile;
-(NSArray *)itemIdentifiers;
-(NSString *)keyProfile;
-(void)setKeyProfile:(NSString *)arg1 ;
-(id)responseBlock;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(id)init;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(id)_lookupWithRequest:(id)arg1 error:(id*)arg2 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(id)initWithPlatformContext:(id)arg1 ;
-(void)_makeLocalMescalRequest;
-(void)_makeLocalJSSignRequest;
-(id)_callerValue;
-(id)_URLBagContext;
-(void)_makeLookupRequestWithPersonalizationStyle:(long long)arg1 ;
-(void)_enumerateQueryParametersUsingBlock:(/*^block*/id)arg1 ;
-(void)_setCaller:(id)arg1 ;
-(void)_setUserAgent:(id)arg1 ;
-(SSBag *)bag;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(NSNumber *)timeoutInterval;
-(void)setResponseBlock:(id)arg1 ;
-(void)main;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(long long)personalizationStyle;
-(void)setBag:(SSBag *)arg1 ;
-(BOOL)shouldSuppressCookies;
-(void)setShouldSuppressCookies:(BOOL)arg1 ;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(NSString *)storeFrontSuffix;
-(BOOL)shouldSuppressUserInfo;
-(void)setImageProfile:(NSString *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)setShouldSuppressUserInfo:(BOOL)arg1 ;
@end

