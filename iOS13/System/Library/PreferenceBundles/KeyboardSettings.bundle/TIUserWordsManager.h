/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/


@class _KSTextReplacementClientStore, NSMutableArray, NSArray;

@interface TIUserWordsManager : NSObject {

	_KSTextReplacementClientStore* _textReplacementStore;
	NSMutableArray* _observers;
	NSArray* _cache;

}

@property (nonatomic,retain) NSArray * cache;                         //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain,readonly) NSArray * entries; 
-(id)init;
-(void)dealloc;
-(id)addObserver:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setCache:(NSArray *)arg1 ;
-(NSArray *)cache;
-(NSArray *)entries;
-(void)requestSync;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)notifyObserversOfChange;
@end

