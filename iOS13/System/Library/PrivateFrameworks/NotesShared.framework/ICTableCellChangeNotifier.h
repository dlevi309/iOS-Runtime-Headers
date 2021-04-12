/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSHashTable;

@interface ICTableCellChangeNotifier : NSObject {

	NSHashTable* _observers;

}

@property (retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)notifyOfChangeAtColumnID:(id)arg1 rowID:(id)arg2 delta:(long long)arg3 ;
@end

