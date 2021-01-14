/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, NSURL, NSDictionary, NSArray;

@interface NSBundle : NSObject {

	unsigned long long _flags;
	A{__CFBundle}* _cfBundle;
	unsigned long long _reserved2;
	Class _principalClass;
	id _initialPath;
	id _resolvedPath;
	NSString* _firstClassName;
	os_unfair_lock_s _lock;

}

@property (getter=isLoaded,readonly) BOOL loaded; 
@property (copy,readonly) NSURL * bundleURL; 
@property (copy,readonly) NSURL * resourceURL; 
@property (copy,readonly) NSURL * executableURL; 
@property (copy,readonly) NSURL * privateFrameworksURL; 
@property (copy,readonly) NSURL * sharedFrameworksURL; 
@property (copy,readonly) NSURL * sharedSupportURL; 
@property (copy,readonly) NSURL * builtInPlugInsURL; 
@property (copy,readonly) NSURL * appStoreReceiptURL; 
@property (copy,readonly) NSString * bundlePath; 
@property (copy,readonly) NSString * resourcePath; 
@property (copy,readonly) NSString * executablePath; 
@property (copy,readonly) NSString * privateFrameworksPath; 
@property (copy,readonly) NSString * sharedFrameworksPath; 
@property (copy,readonly) NSString * sharedSupportPath; 
@property (copy,readonly) NSString * builtInPlugInsPath; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (copy,readonly) NSDictionary * infoDictionary; 
@property (copy,readonly) NSDictionary * localizedInfoDictionary; 
@property (readonly) Class principalClass; 
@property (copy,readonly) NSArray * preferredLocalizations; 
@property (copy,readonly) NSArray * localizations; 
@property (copy,readonly) NSString * developmentLocalization; 
@property (copy,readonly) NSArray * executableArchitectures; 
+(id)bundleForClass:(Class)arg1 ;
+(id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7 ;
+(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4 ;
+(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3 ;
+(id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(/*^block*/id)arg3 ;
+(id)bundleWithPath:(id)arg1 ;
+(id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2 ;
+(id)preferredLocalizationsFromArray:(id)arg1 ;
+(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
+(id)_bundleWithIdentifier:(id)arg1 andLibraryName:(id)arg2 ;
+(id)debugDescription;
+(id)loadedBundles;
+(id)allFrameworks;
+(id)bundleWithURL:(id)arg1 ;
+(void)setSystemLanguages:(id)arg1 ;
+(id)allBundles;
+(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
+(id)bundleWithIdentifier:(id)arg1 ;
+(id)mainBundle;
-(BOOL)load;
-(NSDictionary *)infoDictionary;
-(BOOL)unload;
-(NSURL *)bundleURL;
-(void)__static;
-(CFBundleRef)_cfBundle;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4 ;
-(id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 locale:(id)arg4 ;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3 ;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3 ;
-(NSString *)executablePath;
-(id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(/*^block*/id)arg2 ;
-(NSURL *)appStoreReceiptURL;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3 ;
-(BOOL)_searchForLocalizedString:(id)arg1 foundKey:(id*)arg2 foundTable:(id*)arg3 ;
-(id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4 ;
-(id)initWithURL:(id)arg1 ;
-(id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4 ;
-(NSString *)bundlePath;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 ;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 ;
-(id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(NSString *)resourcePath;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
-(id)initWithPath:(id)arg1 ;
-(Class)classNamed:(id)arg1 ;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)versionNumber;
-(id)_regionsArray;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(id)_wrappedBundleURL;
-(id)bundleLanguages;
-(NSString *)sharedSupportPath;
-(NSURL *)builtInPlugInsURL;
-(id)_wrapperContainerURL;
-(NSURL *)privateFrameworksURL;
-(void)setPreservationPriority:(double)arg1 forTag:(id)arg2 ;
-(NSString *)sharedFrameworksPath;
-(id)pathForAuxiliaryExecutable:(id)arg1 ;
-(BOOL)preflightAndReturnError:(id*)arg1 ;
-(id)URLForAuxiliaryExecutable:(id)arg1 ;
-(NSString *)privateFrameworksPath;
-(NSURL *)sharedSupportURL;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(Class)principalClass;
-(id)description;
-(double)preservationPriorityForTag:(id)arg1 ;
-(CFBundleRef)_cfBundleIfPresent;
-(NSString *)builtInPlugInsPath;
-(BOOL)loadAndReturnError:(id*)arg1 ;
-(NSURL *)sharedFrameworksURL;
-(void)invalidateResourceCache;
-(NSString *)developmentLocalization;
-(NSArray *)executableArchitectures;
-(NSArray *)localizations;
-(NSDictionary *)localizedInfoDictionary;
-(NSArray *)preferredLocalizations;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(NSURL *)executableURL;
-(NSURL *)resourceURL;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(BOOL)isLoaded;
-(void)dealloc;
@end

