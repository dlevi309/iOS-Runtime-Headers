/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_semaphore;
@class TRSession, NSDictionary, NSError, NSObject;

@interface TROperation : NSOperation {

	TRSession* _session;
	NSDictionary* _result;
	NSError* _error;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,copy) NSDictionary * result;                                     //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TRSession * session;                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(id)userCancelledError;
-(void)execute;
-(void)setResult:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)initWithSession:(id)arg1 ;
-(TRSession *)session;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setSession:(TRSession *)arg1 ;
-(void)main;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSDictionary *)result;
-(void)finishWithError:(id)arg1 ;
-(void)finishWithResult:(id)arg1 ;
@end

