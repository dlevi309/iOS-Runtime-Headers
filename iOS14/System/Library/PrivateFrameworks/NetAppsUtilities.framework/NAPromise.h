/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <libobjc.A.dylib/NAPromise.h>

@class NAFuture, NSString;

@interface NAPromise : NSObject <NAPromise> {

	NAFuture* _future;

}

@property (readonly) NAFuture * future;                             //@synthesize future=_future - In the implementation block
@property (nonatomic,copy) NSString * descriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(/*^block*/id)completionHandlerAdapter;
-(id)init;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(NAFuture *)future;
-(NSString *)descriptor;
-(id)initWithFuture:(id)arg1 ;
-(BOOL)finishWithNoResult;
-(void)setDescriptor:(NSString *)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

