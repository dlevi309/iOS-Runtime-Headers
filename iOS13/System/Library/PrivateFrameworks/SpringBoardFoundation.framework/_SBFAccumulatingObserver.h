/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)waitForResults:(id*)arg1 ;
@end

