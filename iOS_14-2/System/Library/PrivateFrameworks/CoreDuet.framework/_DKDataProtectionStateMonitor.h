/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _DKDataProtectionMonitor, NSUUID;

@interface _DKDataProtectionStateMonitor : NSObject {

	_DKDataProtectionMonitor* _main;
	NSUUID* _handlerUUID;
	/*^block*/id _changeHandler;

}

@property (copy) id changeHandler;              //@synthesize changeHandler=_changeHandler - In the implementation block
-(id)changeHandler;
-(void)setChangeHandler:(id)arg1 ;
-(id)init;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(void)dealloc;
@end

