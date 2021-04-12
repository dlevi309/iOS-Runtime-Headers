/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableDictionary;

@interface _UIHIDPathCollection : NSObject {

	NSMutableDictionary* _pathsById;
	CGPoint _position;
	unsigned _buttonMask;
	unsigned long long _machTimestamp;
	unsigned char _locus;
	IOHIDEventRef _hidEvent;
	unsigned _fallbackContextId;

}

@property (nonatomic,readonly) unsigned long long pathCount; 
@property (assign,nonatomic) unsigned fallbackContextId;                  //@synthesize fallbackContextId=_fallbackContextId - In the implementation block
-(id)init;
-(void)dealloc;
-(void)updateWithHIDEvent:(IOHIDEventRef)arg1 ;
-(unsigned)_collectionMask;
-(IOHIDEventRef)_createCollectionEventForEvent:(IOHIDEventRef)arg1 ;
-(unsigned long long)pathCount;
-(BOOL)hasPathWithId:(id)arg1 ;
-(id)pathWithId:(id)arg1 ;
-(id)pathsInPhase:(long long)arg1 ;
-(id)pathsTouching;
-(void)addPath:(id)arg1 ;
-(void)removePath:(id)arg1 ;
-(id)hidEventFromCurrentState;
-(unsigned)fallbackContextId;
-(void)setFallbackContextId:(unsigned)arg1 ;
@end

