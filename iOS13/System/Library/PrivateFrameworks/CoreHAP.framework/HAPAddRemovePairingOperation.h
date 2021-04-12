/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSString, NSData, NSObject;

@interface HAPAddRemovePairingOperation : HMFObject {

	BOOL _admin;
	BOOL _operationExecuting;
	long long _operation;
	NSString* _identifier;
	NSData* _publicKey;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) long long operation;                             //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * publicKey;                              //@synthesize publicKey=_publicKey - In the implementation block
@property (assign,nonatomic) BOOL admin;                                      //@synthesize admin=_admin - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL operationExecuting;                         //@synthesize operationExecuting=_operationExecuting - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)identifier;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSData *)publicKey;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPublicKey:(NSData *)arg1 ;
-(void)setAdmin:(BOOL)arg1 ;
-(void)setOperationExecuting:(BOOL)arg1 ;
-(id)initWith:(long long)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(BOOL)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)admin;
-(BOOL)operationExecuting;
@end

