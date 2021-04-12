/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <CoreData/NSXPCStoreServerRequestHandlingPolicy.h>

@class PLLimitedLibraryFetchFilter, PLAssetsdConnectionAuthorization, NSString, NSDictionary, NSNumber;

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {

	PLLimitedLibraryFetchFilter* _fetchFilter;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSString* _fetchFilterClientIdentifier;
	NSDictionary* _fetchFilterEntityNameToPredicateMap;
	NSNumber* _fetchFilterEnabledStatus;
	os_unfair_lock_s _fetchFilterLock;

}
-(id)init;
-(id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)_restrictedEntityNamesAllowedForContext:(id)arg1 ;
-(id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg1 ;
-(id)initWithConnectionAuthorization:(id)arg1 ;
-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg1 ;
-(void)limitedLibraryFetchFiltersUpdated:(id)arg1 ;
-(BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1 ;
-(void)dealloc;
@end

