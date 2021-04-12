/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@protocol OS_dispatch_queue;
@class AXMOutputRequestHandle, NSObject, NSMutableArray, NSArray;

@interface AXMOutputRequest : NSObject {

	AXMOutputRequestHandle* _handle;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_actions;
	BOOL _interruptsAndClearsQueue;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) AXMOutputRequestHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) NSArray * speechActions; 
@property (nonatomic,readonly) NSArray * oneShotSoundActions; 
@property (nonatomic,readonly) NSArray * activeSoundActions; 
@property (nonatomic,readonly) NSArray * hapticActions; 
@property (nonatomic,copy) id completionBlock;                               //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) BOOL interruptsAndClearsQueue;                  //@synthesize interruptsAndClearsQueue=_interruptsAndClearsQueue - In the implementation block
+(id)speechItemSeparator;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(AXMOutputRequestHandle *)handle;
-(id)init;
-(NSArray *)actions;
-(void)addHapticItemWithURL:(id)arg1 intensity:(double)arg2 ;
-(NSArray *)speechActions;
-(NSArray *)oneShotSoundActions;
-(NSArray *)activeSoundActions;
-(NSArray *)hapticActions;
-(void)addSpeechItem:(id)arg1 ;
-(void)addSoundItemWithID:(id)arg1 ;
-(void)addSoundItemWithURL:(id)arg1 ;
-(void)addActiveSoundItemWithID:(id)arg1 ;
-(void)addActiveSoundItemWithURL:(id)arg1 ;
-(void)addHapticItemWithURL:(id)arg1 ;
-(BOOL)interruptsAndClearsQueue;
-(void)setInterruptsAndClearsQueue:(BOOL)arg1 ;
-(void)_addAction:(id)arg1 ;
@end

