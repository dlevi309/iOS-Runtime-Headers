/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
*/


@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {

	NSMutableArray* _recentItems;
	int _notifyEmptyListToken;
	BOOL _listIsEmpty;

}
-(id)init;
-(void)removeItemFromCache:(id)arg1 ;
-(long long)cachedResponseForItem:(id)arg1 ;
-(void)setResponse:(BOOL)arg1 forItem:(id)arg2 ;
-(void)_blockListChanged:(id)arg1 ;
-(void)syncListEmptyState;
@end

