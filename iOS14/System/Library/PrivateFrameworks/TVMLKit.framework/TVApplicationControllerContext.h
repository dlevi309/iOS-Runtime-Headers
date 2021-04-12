/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDictionary;

@interface TVApplicationControllerContext : NSObject <NSCopying> {

	BOOL _supportsPictureInPicturePlayback;
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
@property (assign,nonatomic) BOOL supportsPictureInPicturePlayback;                  //@synthesize supportsPictureInPicturePlayback=_supportsPictureInPicturePlayback - In the implementation block
@property (nonatomic,copy) NSDictionary * launchOptions;                             //@synthesize launchOptions=_launchOptions - In the implementation block
-(NSDictionary *)launchOptions;
-(void)setLaunchOptions:(NSDictionary *)arg1 ;
-(id)init;
-(BOOL)isSupplementary;
-(void)setStorageIdentifier:(NSString *)arg1 ;
-(NSString *)storageIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setJavaScriptApplicationURL:(NSURL *)arg1 ;
-(NSString *)bagBootURLKey;
-(NSURL *)offlineJSURL;
-(NSURL *)appJSCachePath;
-(NSURL *)appLocalJSURL;
-(BOOL)supportsPictureInPicturePlayback;
-(void)setBagBootURLKey:(NSString *)arg1 ;
-(void)setAppJSCachePath:(NSURL *)arg1 ;
-(NSURL *)javaScriptApplicationURL;
-(void)setSupplementary:(BOOL)arg1 ;
-(void)setAppLocalJSURL:(NSURL *)arg1 ;
-(void)setOfflineJSURL:(NSURL *)arg1 ;
-(void)setSupportsPictureInPicturePlayback:(BOOL)arg1 ;
@end

