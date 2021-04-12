/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <BaseBoard/BSAction.h>

@class FBSSceneSnapshotContext;

@interface FBSSceneSnapshotRequestAction : BSAction

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) FBSSceneSnapshotContext * context; 
-(unsigned long long)type;
-(FBSSceneSnapshotContext *)context;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)initWithType:(unsigned long long)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

