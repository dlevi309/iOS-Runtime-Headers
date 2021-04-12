/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@class FBSSceneSnapshotContext, FBSSceneSnapshotRequestAction;

@interface FBSSceneSnapshotRequestHandle : NSObject {

	unsigned long long _type;
	FBSSceneSnapshotContext* _context;
	FBSSceneSnapshotRequestAction* _action;
	BOOL _canceled;

}
+(id)handleForRequestType:(unsigned long long)arg1 context:(id)arg2 ;
-(void)performRequestForScene:(id)arg1 ;
-(id)initWithRequestType:(unsigned long long)arg1 context:(id)arg2 ;
-(void)_clearAction;
-(void)cancelRequest;
@end

