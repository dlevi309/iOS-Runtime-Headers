/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFObservable.h>

@protocol SBFObservable <NSObject>
@required
-(id)subscribe:(id)arg1;
-(id)map:(/*^block*/id)arg1;
-(id)observeOn:(id)arg1;
-(id)subscribeOn:(id)arg1;
-(id)subscribeWithResultBlock:(/*^block*/id)arg1;
-(id)throttle:(double)arg1 onScheduler:(id)arg2;
-(id)generate:(/*^block*/id)arg1;
-(id)subscribeWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3;

@end


@class NSString;

@interface SBFObservable : NSObject <SBFObservable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observableWithBlock:(/*^block*/id)arg1 ;
+(id)forkJoin:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(id)observeOn:(id)arg1 ;
-(id)subscribeOn:(id)arg1 ;
-(id)subscribeWithResultBlock:(/*^block*/id)arg1 ;
-(id)throttle:(double)arg1 onScheduler:(id)arg2 ;
-(id)generate:(/*^block*/id)arg1 ;
-(id)waitForResults:(id*)arg1 ;
-(id)subscribeWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
@end

