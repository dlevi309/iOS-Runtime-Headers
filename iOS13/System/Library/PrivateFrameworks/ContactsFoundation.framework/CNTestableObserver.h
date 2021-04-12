/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNObserver.h>

@class CNVirtualScheduler, NSMutableArray, CNObservableContractEnforcement, NSArray, NSString;

@interface CNTestableObserver : NSObject <CNObserver> {

	CNVirtualScheduler* _scheduler;
	NSMutableArray* _results;
	CNObservableContractEnforcement* _enforcement;

}

@property (readonly) NSArray * results;                             //@synthesize results=_results - In the implementation block
@property (readonly) NSArray * resultValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observerWithScheduler:(id)arg1 ;
-(NSArray *)results;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)initWithScheduler:(id)arg1 ;
-(NSArray *)resultValues;
@end

