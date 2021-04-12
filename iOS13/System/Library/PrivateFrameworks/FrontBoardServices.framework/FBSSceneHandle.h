/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol FBSSceneHandle <NSObject>
@required
-(id)identifier;
-(id)parameters;
-(id)hostProcess;
-(id)specification;
-(id)clientProcess;
-(id)callOutQueue;
-(id)counterpartAgent;
-(id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
-(id)sessionForIdentifier:(id)arg1;
-(void)closeSession:(id)arg1;

@end

