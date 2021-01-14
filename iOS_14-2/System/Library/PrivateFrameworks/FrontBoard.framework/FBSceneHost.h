/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

@class NSString, FBSSceneSpecification;


@protocol FBSceneHost <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * group; 
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification; 
@required
-(NSString *)group;
-(FBSSceneSpecification *)specification;
-(void)clientWillInvalidate:(id)arg1;
-(NSString *)identifier;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
-(void)client:(id)arg1 didReceiveActions:(id)arg2;

@end

