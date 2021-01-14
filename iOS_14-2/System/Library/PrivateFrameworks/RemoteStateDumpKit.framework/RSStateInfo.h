/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

