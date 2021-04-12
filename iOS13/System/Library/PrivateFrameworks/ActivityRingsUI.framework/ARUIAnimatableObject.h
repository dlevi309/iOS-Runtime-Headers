/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@class NSMutableDictionary;

@interface ARUIAnimatableObject : NSObject {

	NSMutableDictionary* _animatableProperties;

}
-(void)update:(double)arg1 ;
-(void)addAnimation:(id)arg1 forPropertyType:(unsigned long long)arg2 ;
-(void)removeAllAnimationsForPropertyType:(unsigned long long)arg1 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(BOOL)areAnimationsInProgress;
-(id)endingValueForPropertyType:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 forPropertyType:(unsigned long long)arg2 ;
-(id)_animatablePropertyForType:(unsigned long long)arg1 ;
@end

