/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)addObserver:(/*^block*/id)arg1 ;
-(NSArray *)cache;
-(id)init;
-(void)setCache:(NSArray *)arg1 ;
-(NSArray *)entries;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)requestSync;
-(void)dealloc;
-(void)notifyObserversOfChange;
@end

