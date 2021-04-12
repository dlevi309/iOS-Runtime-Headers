/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol REUIRelevanceEngineControllerDelegate <NSObject>
@optional
-(void)engineController:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)engineController:(id)arg1 isElementAtIndexPathVisible:(id)arg2;
-(void)engineControllerDidBeginUpdatingRelevance:(id)arg1;
-(void)engineControllerDidFinishUpdatingRelevance:(id)arg1;
-(void)engineController:(id)arg1 didReloadContent:(id)arg2 withIdentifier:(id)arg3;
-(void)engineController:(id)arg1 didReloadElement:(id)arg2;

@required
-(void)engineController:(id)arg1 didReloadContent:(id)arg2 atIndexPath:(id)arg3;
-(void)engineController:(id)arg1 didRemoveContent:(id)arg2 atIndexPath:(id)arg3;
-(void)engineController:(id)arg1 didInsertContent:(id)arg2 atIndexPath:(id)arg3;
-(void)engineController:(id)arg1 didMoveContent:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;

@end

