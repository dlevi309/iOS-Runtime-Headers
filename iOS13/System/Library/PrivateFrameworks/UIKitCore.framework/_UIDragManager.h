/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class CAContext, NSMutableArray, NSArray, UIScreen;

@interface _UIDragManager : NSObject {

	CAContext* _dragImageContext;
	long long _pendingSessionRequests;
	NSMutableArray* _pendingSessionRequestsCompletionBlocks;
	NSArray* _dragSessionSources;
	NSArray* _dragSessionDestinations;
	UIScreen* _screen;

}

@property (nonatomic,copy) NSArray * dragSessionSources;                   //@synthesize dragSessionSources=_dragSessionSources - In the implementation block
@property (nonatomic,copy) NSArray * dragSessionDestinations;              //@synthesize dragSessionDestinations=_dragSessionDestinations - In the implementation block
@property (nonatomic,readonly) CAContext * dragImageContext; 
@property (nonatomic,__weak,readonly) UIScreen * screen;                   //@synthesize screen=_screen - In the implementation block
+(void)initializeDraggingSystem;
-(UIScreen *)screen;
-(id)beginDragWithSessionConfiguration:(id)arg1 ;
-(void)deleteSlots:(id)arg1 ;
-(unsigned)uploadImage:(CGImageRef)arg1 ;
-(void)sessionSourceDidEnd:(id)arg1 ;
-(id)sessionSourceWithIdentifier:(unsigned)arg1 ;
-(void)sessionDestinationDidEnd:(id)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(void)_willAddDeactivationReason:(id)arg1 ;
-(CAContext *)dragImageContext;
-(NSArray *)dragSessionSources;
-(void)setDragSessionSources:(NSArray *)arg1 ;
-(void)performPendingSessionCompletionBlocksIfPossible;
-(BOOL)hasPendingSessionRequests;
-(NSArray *)dragSessionDestinations;
-(void)setDragSessionDestinations:(NSArray *)arg1 ;
-(void)performAfterCompletingPendingSessionRequests:(/*^block*/id)arg1 ;
-(id)dragDestinationWithEvent:(id)arg1 ;
@end

