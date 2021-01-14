/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AMSKeybag : NSObject {

	unsigned _fairPlayContextID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned fairPlayContextID;                              //@synthesize fairPlayContextID=_fairPlayContextID - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)resetContext;
-(unsigned)fairplayContextWithError:(id*)arg1 ;
-(unsigned)_getFairplayContext:(id*)arg1 ;
-(void)_destroyContext;
-(unsigned)fairplayContext:(id*)arg1 ;
-(BOOL)importKeybagData:(id)arg1 outError:(id*)arg2 ;
-(id)keybagSyncData:(id)arg1 transactionType:(unsigned)arg2 outError:(id*)arg3 ;
-(id)kybsyncData:(id)arg1 transationType:(unsigned)arg2 error:(id*)arg3 ;
-(unsigned)fairPlayContextID;
-(void)setFairPlayContextID:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)importKeybagWithData:(id)arg1 error:(id*)arg2 ;
-(id)keybagSyncDataWithAccountID:(id)arg1 transactionType:(unsigned)arg2 error:(id*)arg3 ;
@end

