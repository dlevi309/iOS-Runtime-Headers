/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _DKDataProtectionMaster, NSUUID;

@interface _DKDataProtectionStateMonitor : NSObject {

	_DKDataProtectionMaster* _master;
	NSUUID* _handlerUUID;
	/*^block*/id _changeHandler;

}

@property (copy) id changeHandler;              //@synthesize changeHandler=_changeHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setChangeHandler:(id)arg1 ;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(id)changeHandler;
@end

