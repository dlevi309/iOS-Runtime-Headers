/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

