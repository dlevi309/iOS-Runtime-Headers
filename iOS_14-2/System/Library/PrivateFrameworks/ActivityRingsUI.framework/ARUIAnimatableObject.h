/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_animatablePropertyForType:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 forPropertyType:(unsigned long long)arg2 ;
-(id)endingValueForPropertyType:(unsigned long long)arg1 ;
@end

