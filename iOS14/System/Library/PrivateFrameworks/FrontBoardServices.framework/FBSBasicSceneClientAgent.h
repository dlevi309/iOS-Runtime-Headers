/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSBasicSceneAgent.h>
#import <libobjc.A.dylib/FBSSceneClientAgent.h>

@class NSString;

@interface FBSBasicSceneClientAgent : FBSBasicSceneAgent <FBSSceneClientAgent>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scene:(id)arg1 willInvalidateWithEvent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scene:(id)arg1 didInitializeWithEvent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scene:(id)arg1 handleEvent:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

