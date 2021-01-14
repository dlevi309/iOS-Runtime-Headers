/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)progress;
-(id)init;
-(BOOL)start;
-(BOOL)isInteractive;
-(BOOL)complete:(BOOL)arg1 ;
-(void)updateProgress:(double)arg1 ;
-(unsigned long long)state;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)cancel;
-(void)addApplierBlock:(/*^block*/id)arg1 ;
-(BOOL)_hasCompleted;
@end

