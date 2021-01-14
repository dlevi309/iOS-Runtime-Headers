/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBWorkspaceEntity.h>

@interface SBPreviousWorkspaceEntity : SBWorkspaceEntity {

	long long _previousLayoutRole;

}

@property (nonatomic,readonly) long long previousLayoutRole;              //@synthesize previousLayoutRole=_previousLayoutRole - In the implementation block
+(id)entityWithPreviousLayoutRole:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2 ;
-(BOOL)isPreviousWorkspaceEntity;
-(id)initWithPreviousLayoutRole:(long long)arg1 ;
-(long long)previousLayoutRole;
@end

