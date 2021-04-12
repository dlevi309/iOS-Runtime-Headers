/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <CoreData/NSXPCStoreServerRequestHandlingPolicy.h>

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy
-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg1 ;
-(BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1 ;
-(id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg1 ;
-(id)_restrictedEntityNamesAllowedForContext:(id)arg1 ;
@end

