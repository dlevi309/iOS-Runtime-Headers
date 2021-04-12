/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)changeHandler;
-(void)setChangeHandler:(id)arg1 ;
-(id)init;
-(_DPDataProtectionMaster *)master;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(void)dealloc;
-(NSUUID *)handlerUUID;
@end

