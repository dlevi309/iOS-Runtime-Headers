/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSHashTable;

@interface ICTableCellChangeNotifier : NSObject {

	NSHashTable* _observers;

}

@property (retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)notifyOfChangeAtColumnID:(id)arg1 rowID:(id)arg2 delta:(long long)arg3 ;
@end

