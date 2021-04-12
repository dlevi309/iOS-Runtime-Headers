/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
*/


@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {

	NSMutableArray* _recentItems;
	int _notifyEmptyListToken;
	BOOL _listIsEmpty;

}
-(id)init;
-(void)syncListEmptyState;
-(long long)cachedResponseForItem:(id)arg1 ;
-(void)_blockListChanged:(id)arg1 ;
-(void)removeItemFromCache:(id)arg1 ;
-(void)setResponse:(BOOL)arg1 forItem:(id)arg2 ;
@end

