/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@class NSString, NSURL;

@interface TKRepository : NSObject {

	NSString* _bundlePath;
	NSURL* _URL;
	NSString* _version;

}

@property (nonatomic,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
+(void)reset;
+(id)_processBundleIdentifier;
+(BOOL)_hasEntitlement:(id)arg1 ;
+(BOOL)_isApprovedProcess;
+(id)bundlePathForURL:(id)arg1 ;
+(void)unpackBundleWithURL:(id)arg1 destinationPath:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)URL;
-(NSString *)version;
-(id)viewPathForName:(id)arg1 ;
-(id)initWithURL:(id)arg1 bundlePath:(id)arg2 ;
@end

