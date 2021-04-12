/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(CKDClientProxy *)proxy;
-(void)start;
-(BOOL)isAsynchronous;
-(CKDClientContext *)context;
-(BOOL)isFinished;
-(void)_setIsFinished:(BOOL)arg1 ;
-(BOOL)isExecuting;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setContext:(CKDClientContext *)arg1 ;
-(id)initWithProxy:(id)arg1 context:(id)arg2 ;
-(void)_markFinished;
@end

