/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/

#import <IntentsCore/INCExecutionInfo.h>

@class NSArray, NSString;

@interface INCIntentExecutionInfo : INCExecutionInfo {

	NSArray* _extensions;
	NSArray* _uiExtensions;
	NSString* _intentClassName;
	NSString* _extensionBundleId;
	NSString* _uiExtensionBundleId;

}

@property (nonatomic,copy,readonly) NSString * intentClassName;                  //@synthesize intentClassName=_intentClassName - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionBundleId;                //@synthesize extensionBundleId=_extensionBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * uiExtensionBundleId;              //@synthesize uiExtensionBundleId=_uiExtensionBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomUIExtension; 
+(void)initialize;
-(id)initWithIntent:(id)arg1 ;
-(NSString *)extensionBundleId;
-(id)initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2 ;
-(BOOL)canRunOnLocalDevice;
-(BOOL)hasCustomUIExtension;
-(id)initWithIntentTypeName:(id)arg1 ;
-(id)_initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2 displayableAppBundleId:(id)arg3 extensionBundleId:(id)arg4 uiExtensionBundleId:(id)arg5 containingAppBundleURL:(id)arg6 ;
-(id)_matchingAttributesForExtensionPoint:(id)arg1 error:(id*)arg2 ;
-(id)_extensionsWithError:(id*)arg1 ;
-(id)_uiExtensionsWithError:(id*)arg1 ;
-(NSString *)intentClassName;
-(NSString *)uiExtensionBundleId;
@end

