/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, _MXExtensionProvider, NSExtension, NSDictionary, NSSet;

@interface _MXExtension : NSObject {

	NSString* _identifier;
	_MXExtensionProvider* _provider;

}

@property (nonatomic,readonly) NSExtension * extension; 
@property (assign,nonatomic,__weak) _MXExtensionProvider * provider;                  //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * attributes; 
@property (nonatomic,copy,readonly) NSDictionary * infoDictionary; 
@property (nonatomic,copy,readonly) NSSet * capabilities; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * containingAppDisplayName; 
+(BOOL)shouldDeserializeCacheItems;
+(void)setShouldDeserializeCacheItems:(BOOL)arg1 ;
-(NSDictionary *)infoDictionary;
-(void)setProvider:(_MXExtensionProvider *)arg1 ;
-(NSSet *)capabilities;
-(_MXExtensionProvider *)provider;
-(id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSDictionary *)attributes;
-(NSString *)extensionPointIdentifier;
-(id)description;
-(NSString *)containingAppDisplayName;
-(BOOL)_isMapsExtension;
-(BOOL)_isIntentExtension;
-(id)siblingExtensions;
-(id)_iconForTableUI;
-(BOOL)canSupportIntent:(id)arg1 ;
-(void)startExtensionServiceWithInputItems:(id)arg1 begin:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_setEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)canSupportIntentClass:(Class)arg1 ;
-(id)_containingAppIdentifer;
-(NSExtension *)extension;
-(id)_iconWithFormat:(int)arg1 ;
-(unsigned long long)type;
-(id)initWithExtensionIdentifier:(id)arg1 extensionProvider:(id)arg2 ;
-(id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 ;
-(id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(void)_loadCacheItems:(id)arg1 ;
-(NSString *)displayName;
-(id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3 ;
@end

