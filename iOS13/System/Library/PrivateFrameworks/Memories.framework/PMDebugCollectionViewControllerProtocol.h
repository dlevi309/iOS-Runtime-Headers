/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class MiroMemory, MiroAutoEditController, Project;


@protocol PMDebugCollectionViewControllerProtocol <NSObject>
@property (nonatomic,readonly) MiroMemory * memory; 
@property (nonatomic,readonly) MiroAutoEditController * autoEditController; 
@property (nonatomic,readonly) Project * project; 
@required
-(MiroMemory *)memory;
-(Project *)project;
-(MiroAutoEditController *)autoEditController;

@end

