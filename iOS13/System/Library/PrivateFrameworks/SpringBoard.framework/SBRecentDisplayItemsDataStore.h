/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRecentDisplayItemsPersistenceDelegate;
@class NSArray, NSOrderedSet;

@interface SBRecentDisplayItemsDataStore : NSObject {

	NSArray* _recentLayouts;
	id<SBRecentDisplayItemsPersistenceDelegate> _persistenceDelegate;
	BOOL _shouldFallbackToRecentAppLayouts;

}

@property (nonatomic,copy) NSOrderedSet * displayItems; 
@property (assign,nonatomic,__weak) id<SBRecentDisplayItemsPersistenceDelegate> persistenceDelegate;              //@synthesize persistenceDelegate=_persistenceDelegate - In the implementation block
-(id)init;
-(NSOrderedSet *)displayItems;
-(void)setDisplayItems:(NSOrderedSet *)arg1 ;
-(id<SBRecentDisplayItemsPersistenceDelegate>)persistenceDelegate;
-(void)setPersistenceDelegate:(id<SBRecentDisplayItemsPersistenceDelegate>)arg1 ;
-(id)initWithRecentLayouts:(id)arg1 fallbackToRecentAppLayouts:(BOOL)arg2 ;
-(id)_displayItemsFromRecentAppLayouts:(id)arg1 ;
@end

