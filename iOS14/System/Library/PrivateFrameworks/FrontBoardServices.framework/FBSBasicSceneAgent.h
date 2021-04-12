/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<FBSSceneHandle>)scene;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)scene:(id)arg1 reviewEvent:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_configureWithScene:(id)arg1 ;
-(NSString *)description;
-(void)didReceiveMessage:(id)arg1 fromCounterpartAgent:(id)arg2 withResponseSender:(/*^block*/id)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

