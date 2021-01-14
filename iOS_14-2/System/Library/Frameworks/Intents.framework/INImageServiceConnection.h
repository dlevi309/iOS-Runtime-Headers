/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INImageLoading.h>
#import <libobjc.A.dylib/INImageStoring.h>

@class NSXPCConnection, NSCache, NSString;

@interface INImageServiceConnection : NSObject <INImageLoading, INImageStoring> {

	NSXPCConnection* _connection;
	NSCache* _localStorageCache;

}

@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canLoadImageDataForImage:(id)arg1 ;
-(id)loadDataImageFromImage:(id)arg1 scaledSize:(SCD_Struct_IN4)arg2 error:(id*)arg3 ;
-(BOOL)canStoreImage:(id)arg1 ;
-(void)loadImageDataAndSizeForImage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)availableSchemasWithError:(id*)arg1 ;
-(NSString *)serviceIdentifier;
-(id)securityScopedURLsForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)schemaURLsForBundleIdentifiers:(id)arg1 ;
-(oneway void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)loadSchemasForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)synchronousServiceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_localStorageCache;
-(BOOL)accessBundleContentForBundleIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)fetchShareExtensionIntentForExtensionContextUUID:(id)arg1 ;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)imageServiceSchemaURLsForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)servicePriority;
-(void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(SCD_Struct_IN4)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)_availableBundleIdentifiers;
@end

