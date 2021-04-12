/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSKChangeNotifier : NSObject {

	CFDictionaryRef mChangeSourceObservers;
	CFDictionaryRef mChangeSourceOfClassObservers;
	CFArrayRef mQueuedObserverListChanges;
	unsigned long long mProcessingChanges;
	id mQueuedObserverLock;

}
-(id)init;
-(void)dealloc;
-(void)p_queueObserverListChange:(id)arg1 ;
-(id)p_findCountedObserverForObserver:(id)arg1 inArray:(id)arg2 ;
-(void)p_addObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(BOOL)arg3 ;
-(void)p_removeObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(BOOL)arg3 ;
-(BOOL)p_pendingAddOrRemoveOfObserver:(id)arg1 forChangeSource:(id)arg2 ;
-(void)p_updateObserverList;
-(void)addObserver:(id)arg1 forChangeSource:(id)arg2 ;
-(void)removeObserver:(id)arg1 forChangeSource:(id)arg2 ;
-(void)addObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2 ;
-(void)removeObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2 ;
-(void)syncProcessChanges:(id)arg1 ;
-(void)asyncProcessChanges:(id)arg1 ;
@end

