/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDisplayItems:(NSOrderedSet *)arg1 ;
-(id)init;
-(NSOrderedSet *)displayItems;
-(void)setPersistenceDelegate:(id<SBRecentDisplayItemsPersistenceDelegate>)arg1 ;
-(id)initWithRecentLayouts:(id)arg1 fallbackToRecentAppLayouts:(BOOL)arg2 ;
-(id)_displayItemsFromRecentAppLayouts:(id)arg1 ;
-(id<SBRecentDisplayItemsPersistenceDelegate>)persistenceDelegate;
@end

