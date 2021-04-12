/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)keybagSyncDataWithAccountID:(id)arg1 transactionType:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)importKeybagWithData:(id)arg1 error:(id*)arg2 ;
-(unsigned)fairplayContextWithError:(id*)arg1 ;
-(unsigned)_getFairplayContext:(id*)arg1 ;
-(void)_destroyContext;
-(unsigned)fairplayContext:(id*)arg1 ;
-(BOOL)importKeybagData:(id)arg1 outError:(id*)arg2 ;
-(id)keybagSyncData:(id)arg1 transactionType:(unsigned)arg2 outError:(id*)arg3 ;
-(id)kybsyncData:(id)arg1 transationType:(unsigned)arg2 error:(id*)arg3 ;
-(void)resetContext;
-(unsigned)fairPlayContextID;
-(void)setFairPlayContextID:(unsigned)arg1 ;
@end

