/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSHashTable, NSArray;

@interface SBSwitcherDemoFilteringController : NSObject {

	NSHashTable* _observers;
	NSArray* _hiddenApplicationBundleIDs;

}

@property (nonatomic,copy) NSArray * hiddenApplicationBundleIDs;              //@synthesize hiddenApplicationBundleIDs=_hiddenApplicationBundleIDs - In the implementation block
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setHiddenApplicationBundleIDs:(NSArray *)arg1 ;
-(NSArray *)hiddenApplicationBundleIDs;
@end

