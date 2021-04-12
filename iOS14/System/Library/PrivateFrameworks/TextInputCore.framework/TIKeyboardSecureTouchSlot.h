/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol BSInvalidatable;
@interface TIKeyboardSecureTouchSlot : NSObject {

	unsigned _slotID;
	unsigned long long _authenticationMessageContext;
	id<BSInvalidatable> _invalidatable;

}

@property (assign,nonatomic) unsigned slotID;                                              //@synthesize slotID=_slotID - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationMessageContext;              //@synthesize authenticationMessageContext=_authenticationMessageContext - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> invalidatable;                            //@synthesize invalidatable=_invalidatable - In the implementation block
-(unsigned)slotID;
-(void)setSlotID:(unsigned)arg1 ;
-(void)setAuthenticationMessageContext:(unsigned long long)arg1 ;
-(unsigned long long)authenticationMessageContext;
-(void)dealloc;
-(id<BSInvalidatable>)invalidatable;
-(void)setInvalidatable:(id<BSInvalidatable>)arg1 ;
@end

