/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

@class NSString, FBSSceneSpecification;


@protocol FBSceneHost <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification; 
@required
-(NSString *)identifier;
-(FBSSceneSpecification *)specification;
-(void)clientWillInvalidate:(id)arg1;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
-(void)client:(id)arg1 didReceiveActions:(id)arg2;

@end

