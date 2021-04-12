/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

