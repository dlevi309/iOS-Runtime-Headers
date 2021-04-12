/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface _UIFocusLinearMovementSequence : NSObject {

	BOOL _looping;
	BOOL _restrictEnteringSequence;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSArray * items;                                                        //@synthesize items=_items - In the implementation block
@property (getter=isLooping,nonatomic,readonly) BOOL looping;                                               //@synthesize looping=_looping - In the implementation block
@property (getter=restrictsEnteringSequence,nonatomic,readonly) BOOL restrictEnteringSequence;              //@synthesize restrictEnteringSequence=_restrictEnteringSequence - In the implementation block
+(id)sequenceWithItems:(id)arg1 loops:(BOOL)arg2 ;
+(id)sequenceWithItems:(id)arg1 loops:(BOOL)arg2 restrictEnteringSequence:(BOOL)arg3 ;
-(id)init;
-(BOOL)isLooping;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 loops:(BOOL)arg2 ;
-(BOOL)restrictsEnteringSequence;
-(id)initWithItems:(id)arg1 loops:(BOOL)arg2 restrictEnteringSequence:(BOOL)arg3 ;
@end

