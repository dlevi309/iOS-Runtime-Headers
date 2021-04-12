/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCTouchInput.h>

@class NSArray;

@interface MCDrawableTouchInput : MCTouchInput {

	BOOL _isInflectionPoint;
	NSArray* _nearbyKeys;
	RefPtr<TI::Favonius::CMTouchHistory>* _touchHistory;

}

@property (nonatomic,readonly) RefPtr<TI::Favonius::CMTouchHistory>* touchHistory;              //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,readonly) BOOL isInflectionPoint;                                          //@synthesize isInflectionPoint=_isInflectionPoint - In the implementation block
@property (nonatomic,readonly) NSArray * nearbyKeys;                                            //@synthesize nearbyKeys=_nearbyKeys - In the implementation block
-(RefPtr<TI::Favonius::CMTouchHistory>*)touchHistory;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)nearbyKeys;
-(id)initWithTouchPoint:(CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 ;
-(id)initWithTouchPoint:(CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 inflectionPoint:(BOOL)arg4 touchHistory:(const RefPtr<TI::Favonius::CMTouchHistory>*)arg5 ;
-(BOOL)isInflectionPoint;
@end

