/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(CKDClientProxy *)proxy;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSString *)operationID;
-(id)ckShortDescription;
-(void)start;
-(NSDate *)startDate;
-(CKDClientContext *)context;
-(BOOL)isFinished;
-(id)_runDurationString;
-(void)_setIsFinished:(BOOL)arg1 ;
-(CKDOperation *)realOperation;
-(id)description;
-(void)main;
-(id)statusReportWithIndent:(unsigned long long)arg1 ;
-(id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2 ;
-(BOOL)isExecuting;
-(id)_startDateString;
-(NSOperationQueue *)targetOperationQueue;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(void)cancel;
-(BOOL)isConcurrent;
-(void)setIsFinished:(BOOL)arg1 ;
@end

