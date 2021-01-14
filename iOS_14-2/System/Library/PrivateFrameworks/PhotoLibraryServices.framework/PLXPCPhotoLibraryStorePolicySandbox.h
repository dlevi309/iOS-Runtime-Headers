/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLXPCPhotoLibraryStorePolicy.h>

@class NSString;

@interface PLXPCPhotoLibraryStorePolicySandbox : NSObject <PLXPCPhotoLibraryStorePolicy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasSandboxAccessForPath:(id)arg1 ;
-(BOOL)shouldUseXPCStoreForDatabasePath:(id)arg1 auditToken:(SCD_Struct_PL32)arg2 ;
@end

