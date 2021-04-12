/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIHIDContext, NSMutableArray, NSMutableDictionary;

@interface _UIHIDTransformer : NSObject {

	_UIHIDContext* _hidContext;
	NSMutableArray* _hidEvents;
	NSMutableDictionary* _hidContextByContextId;
	unsigned _contextId;
	IOHIDEventRef _hidEvent;
	CGSize _canvasSize;
	CGAffineTransform _eventTransform;

}

@property (assign,nonatomic) CGSize canvasSize;               //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign,nonatomic) unsigned contextId;              //@synthesize contextId=_contextId - In the implementation block
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(unsigned)contextId;
-(id)handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)setContextId:(unsigned)arg1 ;
-(void)addOutputHIDEvent:(id)arg1 ;
-(id)_inputEventsForHIDEvent:(IOHIDEventRef)arg1 ;
-(CGSize)canvasSize;
-(id)drainOutputHIDEvents;
-(void)setCanvasSize:(CGSize)arg1 ;
@end

