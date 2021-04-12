/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)shouldUseXPCStoreForDatabasePath:(id)arg1 auditToken:(SCD_Struct_PL32)arg2 ;
-(BOOL)hasSandboxAccessForPath:(id)arg1 ;
@end

