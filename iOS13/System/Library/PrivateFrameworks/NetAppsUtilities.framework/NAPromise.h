/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)finishWithError:(id)arg1 ;
-(NSString *)descriptor;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)setDescriptor:(NSString *)arg1 ;
-(NAFuture *)future;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapter;
-(id)initWithFuture:(id)arg1 ;
-(BOOL)finishWithNoResult;
@end

