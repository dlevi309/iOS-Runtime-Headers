/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSMutableArray;

@interface HUApplier : NSObject {

	NSMutableArray* _applierBlocks;
	NSMutableArray* _completionBlocks;
	unsigned long long _state;
	double _progress;

}

@property (nonatomic,readonly) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
+(void)registerStandaloneApplier:(id)arg1 ;
+(void)unregisterStandaloneApplier:(id)arg1 ;
-(id)init;
-(BOOL)cancel;
-(BOOL)start;
-(double)progress;
-(unsigned long long)state;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isInteractive;
-(void)updateProgress:(double)arg1 ;
-(BOOL)complete:(BOOL)arg1 ;
-(BOOL)_hasCompleted;
-(void)addApplierBlock:(/*^block*/id)arg1 ;
@end

