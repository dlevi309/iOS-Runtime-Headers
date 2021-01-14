/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUImportActionCoordinatorDelegate
@required
-(void)actionCoordinatorDidBeginDelete:(id)arg1;
-(void)actionCoordinatorDidEndDelete:(id)arg1;
-(void)actionCoordinatorWillBeginDelete:(id)arg1;
-(void)actionCoordinatorDidBeginImport:(id)arg1;
-(void)actionCoordinatorDidCancelImport:(id)arg1;
-(void)actionCoordinator:(id)arg1 didCompleteWithImportSession:(id)arg2 results:(id)arg3;
-(id)importDestinationForActionCoordinator:(id)arg1;
-(void)actionCoordinatorWillBeginImport:(id)arg1;

@end

