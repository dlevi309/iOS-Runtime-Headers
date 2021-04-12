/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(/*^block*/id)completionHandlerAdapter;
-(id)init;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(FMFuture *)future;
-(NSString *)descriptor;
-(id)initWithFuture:(id)arg1 ;
-(BOOL)finishWithNoResult;
-(void)setDescriptor:(NSString *)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

