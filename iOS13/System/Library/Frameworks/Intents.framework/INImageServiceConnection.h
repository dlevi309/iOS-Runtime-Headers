/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
+(id)sharedConnection;
-(id)init;
-(void)dealloc;
-(id)loadDataImageFromImage:(id)arg1 scaledSize:(SCD_Struct_IN1)arg2 error:(id*)arg3 ;
-(NSString *)serviceIdentifier;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)canStoreImage:(id)arg1 ;
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)servicePriority;
-(oneway void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_localStorageCache;
-(BOOL)canLoadImageDataForImage:(id)arg1 ;
-(void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(SCD_Struct_IN1)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadImageDataAndSizeForImage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)synchronousServiceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_availableBundleIdentifiers;
-(id)schemaURLsForBundleIdentifiers:(id)arg1 ;
-(id)imageServiceSchemaURLsForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)availableSchemasWithError:(id*)arg1 ;
-(id)loadSchemasForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)accessBundleContentForBundleIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)fetchShareExtensionIntentForExtensionContextUUID:(id)arg1 ;
@end

