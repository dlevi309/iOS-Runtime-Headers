/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

