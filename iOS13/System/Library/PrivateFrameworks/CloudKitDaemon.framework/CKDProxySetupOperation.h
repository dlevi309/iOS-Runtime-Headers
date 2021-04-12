/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <Foundation/NSOperation.h>

@class CKDClientProxy, CKDClientContext;

@interface CKDProxySetupOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	CKDClientProxy* _proxy;
	CKDClientContext* _context;

}

@property (assign,nonatomic,__weak) CKDClientProxy * proxy;                  //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                               //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                //@synthesize isFinished=_isFinished - In the implementation block
+(id)operationWithProxy:(id)arg1 context:(id)arg2 ;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(CKDClientProxy *)proxy;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(void)_setIsFinished:(BOOL)arg1 ;
-(id)initWithProxy:(id)arg1 context:(id)arg2 ;
-(void)_markFinished;
@end

