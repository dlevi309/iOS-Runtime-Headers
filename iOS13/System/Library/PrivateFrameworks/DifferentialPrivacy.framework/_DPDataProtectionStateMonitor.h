/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class _DPDataProtectionMaster, NSUUID;

@interface _DPDataProtectionStateMonitor : NSObject {

	/*^block*/id _changeHandler;
	_DPDataProtectionMaster* _master;
	NSUUID* _handlerUUID;

}

@property (nonatomic,readonly) _DPDataProtectionMaster * master;              //@synthesize master=_master - In the implementation block
@property (readonly) NSUUID * handlerUUID;                                    //@synthesize handlerUUID=_handlerUUID - In the implementation block
@property (copy) id changeHandler;                                            //@synthesize changeHandler=_changeHandler - In the implementation block
+(id)dataProtectionClassA;
+(id)dataProtectionClassC;
+(id)dataProtectionClassD;
-(id)init;
-(void)dealloc;
-(void)setChangeHandler:(id)arg1 ;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(id)changeHandler;
-(_DPDataProtectionMaster *)master;
-(NSUUID *)handlerUUID;
@end

