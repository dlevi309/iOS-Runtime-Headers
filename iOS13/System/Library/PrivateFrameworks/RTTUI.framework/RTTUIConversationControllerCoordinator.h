/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/


@protocol OS_dispatch_queue;
#import <RTTUI/RTTUI-Structs.h>
@class NSObject, NSPointerArray, NSLock, NSIndexPath, RTTUtterance, NSMutableArray;

@interface RTTUIConversationControllerCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _utteranceRequestQueue;
	NSPointerArray* _conversationControllers;
	NSLock* _realtimeSendLock;
	NSIndexPath* _inProgressRealTimeIndexPath;
	RTTUtterance* _inProgressRealTimeUtterance;
	CTServerConnectionRef _ctConnection;
	BOOL _processingUtteranceBuffer;
	NSMutableArray* _utteranceBuffer;

}

@property (nonatomic,retain) NSMutableArray * utteranceBuffer;                          //@synthesize utteranceBuffer=_utteranceBuffer - In the implementation block
@property (assign,nonatomic) BOOL processingUtteranceBuffer;                            //@synthesize processingUtteranceBuffer=_processingUtteranceBuffer - In the implementation block
@property (nonatomic,readonly) NSIndexPath * inProgressRealTimeIndexPath;               //@synthesize inProgressRealTimeIndexPath=_inProgressRealTimeIndexPath - In the implementation block
@property (nonatomic,readonly) RTTUtterance * inProgressRealTimeUtterance;              //@synthesize inProgressRealTimeUtterance=_inProgressRealTimeUtterance - In the implementation block
+(id)coordinator;
-(id)init;
-(id)conversationControllers;
-(void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3 call:(id)arg4 ;
-(BOOL)realtimeTextDidChange:(id)arg1 forUtterance:(id)arg2 lastRowPath:(id)arg3 ;
-(NSMutableArray *)utteranceBuffer;
-(BOOL)processingUtteranceBuffer;
-(void)processUtteranceQueue;
-(void)setProcessingUtteranceBuffer:(BOOL)arg1 ;
-(void)_updateCallActiveStatus:(BOOL)arg1 ;
-(void)addConversationController:(id)arg1 ;
-(void)sendNewUtteranceString:(id)arg1 controller:(id)arg2 ;
-(NSIndexPath *)inProgressRealTimeIndexPath;
-(RTTUtterance *)inProgressRealTimeUtterance;
-(void)setUtteranceBuffer:(NSMutableArray *)arg1 ;
@end

