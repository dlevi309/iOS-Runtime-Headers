/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/


@class NSSet;

@interface FLApprovedItemsFilter : NSObject {

	NSSet* _approvedItemIdentifiers;
	NSSet* _approvedClientIdentifiers;

}
+(id)sharedFilter;
-(unsigned long long)approvalStatusForItem:(id)arg1 ;
@end

