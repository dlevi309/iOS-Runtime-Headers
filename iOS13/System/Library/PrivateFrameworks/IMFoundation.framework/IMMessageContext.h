/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_xpc_object, OS_voucher;
@class NSObject, IMLocalObject;

@interface IMMessageContext : NSObject {

	NSObject*<OS_xpc_object> _xpcMessage;
	IMLocalObject* _localObject;
	id _context;
	BOOL _boost;
	NSObject*<OS_voucher> _voucher;

}

@property (retain) IMLocalObject * localObject;                      //@synthesize localObject=_localObject - In the implementation block
@property (retain) id context;                                       //@synthesize context=_context - In the implementation block
@property (assign) BOOL shouldBoost;                                 //@synthesize boost=_boost - In the implementation block
@property (retain) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
@property (retain) NSObject*<OS_voucher> voucher;                    //@synthesize voucher=_voucher - In the implementation block
-(id)init;
-(void)dealloc;
-(id)context;
-(void)setContext:(id)arg1 ;
-(IMLocalObject *)localObject;
-(void)setLocalObject:(IMLocalObject *)arg1 ;
-(NSObject*<OS_voucher>)voucher;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)shouldBoost;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(void)setShouldBoost:(BOOL)arg1 ;
@end

