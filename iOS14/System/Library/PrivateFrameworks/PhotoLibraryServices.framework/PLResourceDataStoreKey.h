/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLResourceDataStoreKey.h>

@class NSString;

@interface PLResourceDataStoreKey : NSObject <PLResourceDataStoreKey>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)refreshSandboxExtensionForURL:(id)arg1 libraryID:(id)arg2 assetUUID:(id)arg3 error:(id*)arg4 ;
+(BOOL)refreshSandboxExtensionForURL:(id)arg1 assetID:(id)arg2 error:(id*)arg3 ;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)descriptionForAssetID:(id)arg1 ;
-(BOOL)isEqualToKey:(id)arg1 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)keyData;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
@end

