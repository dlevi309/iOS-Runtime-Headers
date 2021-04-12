/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteStateDumpKit.framework/RemoteStateDumpKit
*/


@interface RSStateInfo : NSObject {

	unsigned long long _stateType;
	long long _actionRevision;

}

@property (assign,nonatomic) unsigned long long stateType;              //@synthesize stateType=_stateType - In the implementation block
@property (assign,nonatomic) long long actionRevision;                  //@synthesize actionRevision=_actionRevision - In the implementation block
-(unsigned long long)stateType;
-(void)setStateType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 revision:(long long)arg2 ;
-(long long)actionRevision;
-(void)setActionRevision:(long long)arg1 ;
@end

