/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFObserver.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSError, NSObject, NSString;

@interface _SBFAccumulatingObserver : NSObject <SBFObserver> {

	NSMutableArray* _results;
	NSError* _error;
	BOOL _didComplete;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
-(id)waitForResults:(id*)arg1 ;
@end

