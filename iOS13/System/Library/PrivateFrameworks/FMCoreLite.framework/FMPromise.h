/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/

#import <FMCoreLite/FMPromise.h>

@class FMFuture, NSString;

@interface FMPromise : NSObject <FMPromise> {

	FMFuture* _future;

}

@property (readonly) FMFuture * future;                             //@synthesize future=_future - In the implementation block
@property (nonatomic,copy) NSString * descriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)finishWithError:(id)arg1 ;
-(NSString *)descriptor;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)setDescriptor:(NSString *)arg1 ;
-(FMFuture *)future;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapter;
-(id)initWithFuture:(id)arg1 ;
-(BOOL)finishWithNoResult;
@end

