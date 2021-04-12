/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSMutableSet, NSArray, NSMutableArray;

@interface SGHistorySharedData : NSObject {

	NSMutableSet* confirmedEventHashes;
	NSMutableSet* confirmedEventWithoutTimestampHashes;
	NSMutableSet* rejectedEventHashes;
	NSMutableSet* confirmedReminderHashes;
	NSMutableSet* rejectedReminderHashes;
	NSMutableSet* contactHashes;
	NSMutableSet* confirmedEventFieldHashes;
	NSMutableSet* confirmedEventWithoutTimestampFieldHashes;
	NSMutableSet* storageDetailHashes;
	NSMutableSet* dontUpdate;
	NSArray* resetInfo;
	NSMutableArray* observers;

}
@end

