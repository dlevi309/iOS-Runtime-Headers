/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <BaseBoard/BSAction.h>

@class FBSSceneSnapshotContext;

@interface FBSSceneSnapshotRequestAction : BSAction

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) FBSSceneSnapshotContext * context; 
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(FBSSceneSnapshotContext *)context;
-(id)initWithType:(unsigned long long)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(unsigned long long)type;
@end

