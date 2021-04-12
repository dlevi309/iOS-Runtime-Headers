/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSBundle, NSString, NSDictionary, NSArray;

@interface NSExtension : NSObject

@property (readonly) BOOL _wantsProcessPerRequest; 
@property (setter=_setPlugIn:,nonatomic,retain) id<PKPlugIn> _plugIn; 
@property (nonatomic,retain,readonly) NSBundle * _extensionBundle; 
@property (nonatomic,copy,readonly) NSString * _localizedName; 
@property (nonatomic,copy,readonly) NSString * _localizedShortName; 
@property (nonatomic,copy) id _requestPostCompletionBlock; 
@property (nonatomic,copy) id _requestPostCompletionBlockWithItems; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * version; 
@property (nonatomic,copy,readonly) NSDictionary * attributes; 
@property (nonatomic,copy,readonly) NSDictionary * infoDictionary; 
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier; 
@property (nonatomic,copy,readonly) NSArray * icons; 
@property (nonatomic,readonly) BOOL optedIn; 
@property (nonatomic,copy) id requestCompletionBlock; 
@property (nonatomic,copy) id requestCancellationBlock; 
@property (nonatomic,copy) id requestInterruptionBlock; 
+(id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)extensionsWithMatchingAttributes:(id)arg1 error:(id*)arg2 ;
+(id)extensionWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)predicateForActivationRule:(id)arg1 ;
+(BOOL)_evaluateActivationRuleWithoutWorkarounds:(id)arg1 withExtensionItemsRepresentation:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)globalStateQueueForExtension:(id)arg1 ;
+(void)extensionWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)initializeFiltering;
+(void)extensionsWithMatchingAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)_shouldLogExtensionDiscovery;
+(id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(BOOL)arg2 error:(id*)arg3 ;
+(void)extensionWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2 ;
+(void)endMatchingExtensions:(id)arg1 ;
-(void)_hostDidEnterBackgroundNote:(id)arg1 ;
-(void)beginExtensionRequestWithInputItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hostWillEnterForegroundNote:(id)arg1 ;
-(id)init;
-(void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_kill:(int)arg1 ;
-(BOOL)_isPhotoServiceAccessGranted;
-(void)_hostWillResignActiveNote:(id)arg1 ;
-(BOOL)attemptOptOut:(id*)arg1 ;
-(void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 completion:(/*^block*/id)arg4 ;
-(int)pidForRequestIdentifier:(id)arg1 ;
-(void)_hostDidBecomeActiveNote:(id)arg1 ;
-(void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelExtensionRequestWithIdentifier:(id)arg1 ;
-(void)_dropAssertion;
-(void)_safelyEndUsing:(/*^block*/id)arg1 ;
-(id)_init;
-(BOOL)attemptOptIn:(id*)arg1 ;
-(id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 error:(id*)arg3 ;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(id)_extensionContextForUUID:(id)arg1 ;
-(id)beginExtensionRequestWithInputItems:(id)arg1 error:(id*)arg2 ;
-(id)_initWithPKPlugin:(id)arg1 ;
-(void)_setAllowedErrorClasses:(id)arg1 ;
-(void)_safelyBeginUsing:(/*^block*/id)arg1 ;
@end

