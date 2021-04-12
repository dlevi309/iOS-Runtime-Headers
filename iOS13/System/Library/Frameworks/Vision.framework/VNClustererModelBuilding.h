/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol VNClustererModelBuilding
@optional
-(id)updateModelByAddingFaces:(id)arg1 canceller:(id)arg2 error:(id*)arg3;
-(id)updateModelByAddingFaces:(id)arg1 withGroupingIdentifiers:(id)arg2 canceller:(id)arg3 error:(id*)arg4;
-(id)updateModelByRemovingFaces:(id)arg1 canceller:(id)arg2 error:(id*)arg3;

@required
-(BOOL)resetModelState:(id)arg1 error:(id*)arg2;
-(id)saveAndReturnCurrentModelState:(id*)arg1;
-(id)updateModelByAddingFaces:(id)arg1 andRemovingFaces:(id)arg2 canceller:(id)arg3 error:(id*)arg4;
-(id)updateModelByAddingFaces:(id)arg1 withGroupingIdentifiers:(id)arg2 andRemovingFaces:(id)arg3 canceller:(id)arg4 error:(id*)arg5;

@end

