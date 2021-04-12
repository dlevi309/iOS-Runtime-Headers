/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


#import <AppStoreKit/AppStoreKit-Structs.h>
@class NSMutableArray;

@interface _ASKResourceCacheGroup : NSObject {

	NSMutableArray* _memberContents;
	os_unfair_lock_s _guard;
	BOOL _hasMultipleMembers;

}

@property (assign) BOOL hasMultipleMembers;              //@synthesize hasMultipleMembers=_hasMultipleMembers - In the implementation block
-(id)init;
-(void)setHasMultipleMembers:(BOOL)arg1 ;
-(id)snapshotMemberContents;
-(id)onlyMemberContents;
-(id)makeMemberContents;
-(void)discardMemberContents:(id)arg1 ;
-(BOOL)hasMultipleMembers;
@end

