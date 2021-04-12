/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@protocol OS_dispatch_queue;
@class NSArray, NSObject, SOExtensionFinder;

@interface SOExtensionManager : NSObject {

	NSArray* _loadedExtensions;
	NSObject*<OS_dispatch_queue> _extensionManagerQueue;
	SOExtensionFinder* _extensionFinder;

}

@property (nonatomic,readonly) NSArray * loadedExtensions;              //@synthesize loadedExtensions=_loadedExtensions - In the implementation block
+(id)sharedInstance;
+(BOOL)_isMatchedExtension:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(id)internalExtensionBundleIdentifier;
+(void)_sendNotificationsLoadedExtensions:(id)arg1 new:(id)arg2 removed:(id)arg3 ;
+(id)internalExtensionsBundleIdentifiers;
+(BOOL)isInternalExtensionBundleIdentifier:(id)arg1 ;
+(BOOL)isAppleConnectExtensionBundleIdentifier:(id)arg1 ;
+(BOOL)isTiburonExtensionBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)beginMatchingExtensions;
-(void)loadExtensions;
-(void)endMatchingExtensions;
-(void)unloadExtensions;
-(void)loadExtensionWithBundleIdentifer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)loadExtensionWithBundleIdentifier:(id)arg1 ;
-(void)_doBeginMatchingExtensions;
-(void)_doEndMatchingExtensions;
-(id)_doLoadExtensions;
-(NSArray *)loadedExtensions;
-(id)loadedExtensionWithBundleIdentifer:(id)arg1 ;
-(id)loadInternalExtension;
-(id)loadedInternalExtension;
-(BOOL)isLoadedExtensionWithBundleIdentifer:(id)arg1 ;
@end

