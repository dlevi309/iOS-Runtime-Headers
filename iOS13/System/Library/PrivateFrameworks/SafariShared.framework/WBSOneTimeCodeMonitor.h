/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class IMOneTimeCodeAccelerator, NSObject, NSArray, NSHashTable;

@interface WBSOneTimeCodeMonitor : NSObject {

	IMOneTimeCodeAccelerator* _oneTimeCodeAccelerator;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSArray* _codes;
	NSHashTable* _observers;

}

@property (nonatomic,copy,readonly) NSArray * codes; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)codes;
-(void)consumeCode:(id)arg1 ;
@end

