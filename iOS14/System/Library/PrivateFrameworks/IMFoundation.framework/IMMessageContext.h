/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_xpc_object, OS_voucher;
@class NSObject, IMLocalObject;

@interface IMMessageContext : NSObject {

	NSObject*<OS_xpc_object> _xpcMessage;
	BOOL _boost;
	BOOL _shouldBoost;
	BOOL _sync;
	BOOL _reply;
	BOOL _needReply;
	IMLocalObject* _localObject;
	id _context;
	NSObject*<OS_voucher> _voucher;

}

@property (retain) IMLocalObject * localObject;                      //@synthesize localObject=_localObject - In the implementation block
@property (retain) id context;                                       //@synthesize context=_context - In the implementation block
@property (assign) BOOL shouldBoost;                                 //@synthesize shouldBoost=_shouldBoost - In the implementation block
@property (assign,nonatomic) BOOL sync;                              //@synthesize sync=_sync - In the implementation block
@property (assign,nonatomic) BOOL reply;                             //@synthesize reply=_reply - In the implementation block
@property (assign,nonatomic) BOOL needReply;                         //@synthesize needReply=_needReply - In the implementation block
@property (retain) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
@property (retain) NSObject*<OS_voucher> voucher;                    //@synthesize voucher=_voucher - In the implementation block
-(NSObject*<OS_voucher>)voucher;
-(BOOL)sync;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setShouldBoost:(BOOL)arg1 ;
-(id)init;
-(IMLocalObject *)localObject;
-(id)context;
-(void)setNeedReply:(BOOL)arg1 ;
-(BOOL)needReply;
-(BOOL)reply;
-(BOOL)isSync;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(void)setLocalObject:(IMLocalObject *)arg1 ;
-(void)setReply:(BOOL)arg1 ;
-(void)setSync:(BOOL)arg1 ;
-(BOOL)isReply;
-(BOOL)shouldBoost;
-(void)setContext:(id)arg1 ;
@end

