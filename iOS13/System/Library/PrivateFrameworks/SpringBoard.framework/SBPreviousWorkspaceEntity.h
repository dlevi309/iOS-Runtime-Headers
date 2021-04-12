/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBWorkspaceEntity.h>

@interface SBPreviousWorkspaceEntity : SBWorkspaceEntity {

	long long _previousLayoutRole;

}

@property (nonatomic,readonly) long long previousLayoutRole;              //@synthesize previousLayoutRole=_previousLayoutRole - In the implementation block
+(id)entityWithPreviousLayoutRole:(long long)arg1 ;
-(BOOL)isPreviousWorkspaceEntity;
-(long long)previousLayoutRole;
-(id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2 ;
-(id)initWithPreviousLayoutRole:(long long)arg1 ;
@end

