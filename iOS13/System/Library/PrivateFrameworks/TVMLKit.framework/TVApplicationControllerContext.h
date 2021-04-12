/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDictionary;

@interface TVApplicationControllerContext : NSObject <NSCopying> {

	BOOL _supplementary;
	NSURL* _javaScriptApplicationURL;
	NSString* _storageIdentifier;
	NSDictionary* _launchOptions;
	NSURL* _appLocalJSURL;
	NSURL* _appJSCachePath;
	NSString* _bagBootURLKey;
	NSURL* _offlineJSURL;

}

@property (assign,getter=isSupplementary,nonatomic) BOOL supplementary;              //@synthesize supplementary=_supplementary - In the implementation block
@property (nonatomic,copy) NSURL * appLocalJSURL;                                    //@synthesize appLocalJSURL=_appLocalJSURL - In the implementation block
@property (nonatomic,copy) NSURL * appJSCachePath;                                   //@synthesize appJSCachePath=_appJSCachePath - In the implementation block
@property (nonatomic,copy) NSString * bagBootURLKey;                                 //@synthesize bagBootURLKey=_bagBootURLKey - In the implementation block
@property (nonatomic,copy) NSURL * offlineJSURL;                                     //@synthesize offlineJSURL=_offlineJSURL - In the implementation block
@property (nonatomic,copy) NSURL * javaScriptApplicationURL;                         //@synthesize javaScriptApplicationURL=_javaScriptApplicationURL - In the implementation block
@property (nonatomic,copy) NSString * storageIdentifier;                             //@synthesize storageIdentifier=_storageIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * launchOptions;                             //@synthesize launchOptions=_launchOptions - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLaunchOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)launchOptions;
-(BOOL)isSupplementary;
-(NSURL *)appJSCachePath;
-(NSURL *)appLocalJSURL;
-(NSString *)bagBootURLKey;
-(NSURL *)offlineJSURL;
-(NSString *)storageIdentifier;
-(void)setStorageIdentifier:(NSString *)arg1 ;
-(void)setBagBootURLKey:(NSString *)arg1 ;
-(void)setJavaScriptApplicationURL:(NSURL *)arg1 ;
-(void)setAppJSCachePath:(NSURL *)arg1 ;
-(NSURL *)javaScriptApplicationURL;
-(void)setSupplementary:(BOOL)arg1 ;
-(void)setAppLocalJSURL:(NSURL *)arg1 ;
-(void)setOfflineJSURL:(NSURL *)arg1 ;
@end

