/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@class NSURL, IKURLBagCache;

@interface TVStoreApplicationSetupHelper : NSObject {

	NSURL* _defaultBootURL;
	IKURLBagCache* _bagCache;

}

@property (nonatomic,copy) NSURL * defaultBootURL;                    //@synthesize defaultBootURL=_defaultBootURL - In the implementation block
@property (nonatomic,readonly) IKURLBagCache * bagCache;              //@synthesize bagCache=_bagCache - In the implementation block
+(id)bootURLWithBagBootURL:(id)arg1 defaultBootURL:(id)arg2 ;
+(id)launchContextWithLaunchOptions:(id)arg1 bagBootURLKey:(id)arg2 useCache:(BOOL)arg3 ;
+(id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 bagBootURLKey:(id)arg3 useCache:(BOOL)arg4 ;
+(id)_parsedQueryParametersForURL:(id)arg1 ;
+(id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 useCache:(BOOL)arg3 ;
+(id)preferredBootURL;
+(id)fallbackBootURL;
+(id)defaultBagBootLaunchContextWithOptions:(id)arg1 useCache:(BOOL)arg2 ;
+(id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 ;
+(id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 appLocalBootURL:(id)arg3 ;
-(id)init;
-(IKURLBagCache *)bagCache;
-(id)initWithDefaultBootURL:(id)arg1 ;
-(id)initWithDefaultBootURL:(id)arg1 bagCache:(id)arg2 ;
-(NSURL *)defaultBootURL;
-(void)obtainBootURLWithCompletion:(/*^block*/id)arg1 ;
-(void)setDefaultBootURL:(NSURL *)arg1 ;
@end

