/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoardServices/FBSSceneSnapshotAction.h>

@class NSString, RBSAssertion;

@interface FBSceneSnapshotAction : FBSSceneSnapshotAction {

	NSString* _sceneID;
	RBSAssertion* _assertion;

}

@property (nonatomic,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(id)initWithScene:(id)arg1 requests:(id)arg2 expirationInterval:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSString *)sceneID;
@end

