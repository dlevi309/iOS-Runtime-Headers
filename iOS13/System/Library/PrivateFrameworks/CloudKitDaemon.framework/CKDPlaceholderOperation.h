/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class NSObject, NSDate, CKDOperation, NSOperationQueue, NSString, CKDClientProxy, CKDClientContext;

@interface CKDPlaceholderOperation : NSOperation {

	NSObject*<OS_dispatch_group> _group;
	BOOL _isFinished;
	BOOL _isExecuting;
	NSDate* _startDate;
	CKDOperation* _realOperation;
	NSOperationQueue* _targetOperationQueue;

}

@property (nonatomic,retain) NSDate * startDate;                                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) CKDOperation * realOperation;                         //@synthesize realOperation=_realOperation - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * targetOperationQueue;              //@synthesize targetOperationQueue=_targetOperationQueue - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                       //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                        //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,readonly) NSString * operationID; 
@property (nonatomic,__weak,readonly) CKDClientProxy * proxy; 
@property (nonatomic,readonly) CKDClientContext * context; 
-(id)description;
-(void)cancel;
-(void)start;
-(void)main;
-(NSDate *)startDate;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(CKDClientContext *)context;
-(void)setStartDate:(NSDate *)arg1 ;
-(CKDClientProxy *)proxy;
-(void)setIsFinished:(BOOL)arg1 ;
-(NSString *)operationID;
-(id)ckShortDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(void)_setIsFinished:(BOOL)arg1 ;
-(id)_startDateString;
-(id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2 ;
-(id)statusReportWithIndent:(unsigned long long)arg1 ;
-(id)_runDurationString;
-(CKDOperation *)realOperation;
-(NSOperationQueue *)targetOperationQueue;
@end

