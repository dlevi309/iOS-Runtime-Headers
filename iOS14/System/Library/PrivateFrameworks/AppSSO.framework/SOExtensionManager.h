/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@protocol OS_dispatch_queue;
@class NSObject, SOExtensionFinder, NSArray;

@interface SOExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _extensionManagerQueue;
	SOExtensionFinder* _extensionFinder;
	NSArray* _loadedExtensions;

}

@property (nonatomic,readonly) NSArray * loadedExtensions;              //@synthesize loadedExtensions=_loadedExtensions - In the implementation block
+(id)sharedInstance;
+(id)internalExtensionsBundleIdentifiers;
+(BOOL)isInternalExtensionBundleIdentifier:(id)arg1 ;
+(BOOL)isAppleConnectExtensionBundleIdentifier:(id)arg1 ;
+(BOOL)_isMatchedExtension:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(void)_sendNotificationsLoadedExtensions:(id)arg1 new:(id)arg2 removed:(id)arg3 ;
+(BOOL)isTiburonExtensionBundleIdentifier:(id)arg1 ;
+(id)internalExtensionBundleIdentifier;
-(void)loadExtensionWithBundleIdentifer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)loadExtensionWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)loadExtensions;
-(void)_doEndMatchingExtensions;
-(id)loadInternalExtension;
-(BOOL)isLoadedExtensionWithBundleIdentifer:(id)arg1 ;
-(id)loadedInternalExtension;
-(void)beginMatchingExtensions;
-(void)_doBeginMatchingExtensions;
-(NSArray *)loadedExtensions;
-(id)loadedExtensionWithBundleIdentifer:(id)arg1 ;
-(void)unloadExtensions;
-(id)_doLoadExtensions;
-(void)endMatchingExtensions;
-(void)dealloc;
@end

