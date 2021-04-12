/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSSceneAgent.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSSceneHandle;
@class NSString;

@interface FBSBasicSceneAgent : NSObject <FBSSceneAgent, BSDescriptionProviding> {

	id<FBSSceneHandle> _scene;

}

@property (nonatomic,__weak,readonly) id<FBSSceneHandle> scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<FBSSceneHandle>)scene;
-(void)scene:(id)arg1 reviewEvent:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_configureWithScene:(id)arg1 ;
-(void)didReceiveMessage:(id)arg1 fromCounterpartAgent:(id)arg2 withResponseSender:(/*^block*/id)arg3 ;
@end

