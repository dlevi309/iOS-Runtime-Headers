/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addPath:(id)arg1 ;
-(unsigned long long)pathCount;
-(id)pathWithId:(id)arg1 ;
-(void)removePath:(id)arg1 ;
-(void)updateWithHIDEvent:(IOHIDEventRef)arg1 ;
-(unsigned)_collectionMask;
-(IOHIDEventRef)_createCollectionEventForEvent:(IOHIDEventRef)arg1 ;
-(BOOL)hasPathWithId:(id)arg1 ;
-(id)pathsInPhase:(long long)arg1 ;
-(id)pathsTouching;
-(id)hidEventFromCurrentState;
-(unsigned)fallbackContextId;
-(void)setFallbackContextId:(unsigned)arg1 ;
-(void)dealloc;
@end

