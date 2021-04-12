/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)bundlePathForURL:(id)arg1 ;
+(void)unpackBundleWithURL:(id)arg1 destinationPath:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)version;
-(NSURL *)URL;
-(id)viewPathForName:(id)arg1 ;
-(id)initWithURL:(id)arg1 bundlePath:(id)arg2 ;
@end

