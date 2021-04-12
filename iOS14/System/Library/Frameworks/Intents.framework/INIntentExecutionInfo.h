/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INExecutionInfo.h>

@class NSArray, NSString;

@interface INIntentExecutionInfo : INExecutionInfo {

	NSArray* _extensions;
	NSArray* _uiExtensions;
	NSString* _intentClassName;
	long long _preferredCallProvider;
	NSString* _uiExtensionBundleId;

}

@property (nonatomic,copy,readonly) NSString * intentClassName;                  //@synthesize intentClassName=_intentClassName - In the implementation block
@property (nonatomic,readonly) long long preferredCallProvider;                  //@synthesize preferredCallProvider=_preferredCallProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * uiExtensionBundleId;              //@synthesize uiExtensionBundleId=_uiExtensionBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomUIExtension; 
+(void)initialize;
-(NSString *)intentClassName;
-(id)initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2 ;
-(NSString *)uiExtensionBundleId;
-(id)_matchingAttributesForExtensionPoint:(id)arg1 error:(id*)arg2 ;
-(long long)preferredCallProvider;
-(BOOL)hasCustomUIExtension;
-(id)_extensionsWithError:(id*)arg1 ;
-(id)initWithIntentClassName:(id)arg1 extensionBundleId:(id)arg2 ;
-(BOOL)canRunOnLocalDevice;
-(id)initWithIntent:(id)arg1 ;
-(id)initWithIntentTypeName:(id)arg1 ;
-(id)_uiExtensionsWithError:(id*)arg1 ;
-(id)_initWithIntentClassName:(id)arg1 preferredCallProvider:(long long)arg2 launchableAppBundleId:(id)arg3 displayableAppBundleId:(id)arg4 extensionBundleId:(id)arg5 uiExtensionBundleId:(id)arg6 containingAppBundleURL:(id)arg7 ;
@end

