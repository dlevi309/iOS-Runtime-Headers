/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)persistentStoreCoordinator;
-(id)libraryServicesManager;
-(id)initWithLibraryServicesManager:(id)arg1 ;
@end

