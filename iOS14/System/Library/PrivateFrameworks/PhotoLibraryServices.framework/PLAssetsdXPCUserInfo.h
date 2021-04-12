/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLXPCUserInfo.h>

@class PLLibraryServicesManager, NSString;

@interface PLAssetsdXPCUserInfo : NSObject <PLXPCUserInfo> {

	PLLibraryServicesManager* _libraryServicesManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)libraryServicesManager;
-(id)persistentStoreCoordinator;
-(id)initWithLibraryServicesManager:(id)arg1 ;
@end

