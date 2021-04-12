/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPSpotlightCollectorObserving <NSObject>
@required
-(void)collector:(id)arg1 didGatherItems:(id)arg2;
-(id)itemPredicateForCollector:(id)arg1;
-(unsigned long long)maximumNumberOfItemsForCollector:(id)arg1;
-(void)collector:(id)arg1 didUpdateItemsOrigin:(unsigned long long)arg2;
-(void)collector:(id)arg1 didRemoveItemIDs:(id)arg2;
-(void)collector:(id)arg1 didUpdateItems:(id)arg2;
-(void)collector:(id)arg1 didEncounterError:(id)arg2;

@end

