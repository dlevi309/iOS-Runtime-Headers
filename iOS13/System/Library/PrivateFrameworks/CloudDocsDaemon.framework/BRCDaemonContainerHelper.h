/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/BRContainerHelper.h>

@class NSSet, NSString;

@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper> {

	NSSet* _disabledBundleIDs;
	NSSet* _knownBundleIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)itemIDForURL:(id)arg1 error:(id*)arg2 ;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3 ;
-(id)fetchContainerForURL:(id)arg1 ;
-(id)fetchAllContainersByIDWithError:(id*)arg1 ;
-(BOOL)canFetchAllContainersByID;
-(BOOL)cloudSyncTCCDisabledForContainerMeta:(id)arg1 ;
-(unsigned short)br_capabilityToMoveFromLookup:(id)arg1 toNewParent:(id)arg2 session:(id)arg3 error:(id*)arg4 ;
@end

