/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/ExtensionFoundation
*/

#import <ExtensionFoundation/ExtensionFoundation-Structs.h>
#import <Foundation/NSOperation.h>

@class NSURL, NSMutableDictionary, NSMutableArray, NSDictionary, NSArray;

@interface EXCacheBuilder : NSOperation {

	NSURL* _sourceURL;
	NSMutableDictionary* __combinedExtensionSDK;
	NSMutableDictionary* __combinedAppleInternalExtensionSDK;
	NSMutableArray* __extensions;
	NSMutableArray* __appleInternalExtensions;

}

@property (retain) NSMutableDictionary * _combinedExtensionSDK;                           //@synthesize _combinedExtensionSDK=__combinedExtensionSDK - In the implementation block
@property (retain) NSMutableDictionary * _combinedAppleInternalExtensionSDK;              //@synthesize _combinedAppleInternalExtensionSDK=__combinedAppleInternalExtensionSDK - In the implementation block
@property (retain) NSMutableArray * _extensions;                                          //@synthesize _extensions=__extensions - In the implementation block
@property (retain) NSMutableArray * _appleInternalExtensions;                             //@synthesize _appleInternalExtensions=__appleInternalExtensions - In the implementation block
@property (readonly) NSURL * sourceURL;                                                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (readonly) NSDictionary * combinedExtensionSDK; 
@property (readonly) NSDictionary * combinedAppleInternalExtensionSDK; 
@property (readonly) NSArray * extensionPaths; 
@property (readonly) NSArray * appleInternalExtensionPaths; 
+(id)rootURL;
+(id)frameworkPaths;
-(NSURL *)sourceURL;
-(NSMutableArray *)_extensions;
-(id)initWithSourceURL:(id)arg1 ;
-(void)main;
-(BOOL)isCatalystSupportURL:(id)arg1 ;
-(BOOL)isAppleInternalURL:(id)arg1 ;
-(NSMutableDictionary *)_combinedExtensionSDK;
-(NSMutableDictionary *)_combinedAppleInternalExtensionSDK;
-(void)enumerateBundlesWithPathExtension:(id)arg1 atURL:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSArray *)extensionPaths;
-(NSDictionary *)combinedExtensionSDK;
-(NSArray *)appleInternalExtensionPaths;
-(NSDictionary *)combinedAppleInternalExtensionSDK;
-(void)processExtensionSDKFromBundle:(CFBundleRef)arg1 ;
-(void)processExtensionsFromBundle:(CFBundleRef)arg1 ;
-(void)enumerateFrameworksBundlesWithFrameworkURL:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)writeCacheToURL:(id)arg1 options:(unsigned long long)arg2 ;
-(void)set_combinedExtensionSDK:(NSMutableDictionary *)arg1 ;
-(void)set_combinedAppleInternalExtensionSDK:(NSMutableDictionary *)arg1 ;
-(void)set_extensions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)_appleInternalExtensions;
-(void)set_appleInternalExtensions:(NSMutableArray *)arg1 ;
@end

