/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoardServices/FBSSceneSnapshotAction.h>

@class NSString, RBSAssertion;

@interface FBSceneSnapshotAction : FBSSceneSnapshotAction {

	NSString* _sceneID;
	RBSAssertion* _assertion;

}

@property (nonatomic,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(void)dealloc;
-(NSString *)sceneID;
-(id)initWithScene:(id)arg1 requests:(id)arg2 expirationInterval:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
@end

