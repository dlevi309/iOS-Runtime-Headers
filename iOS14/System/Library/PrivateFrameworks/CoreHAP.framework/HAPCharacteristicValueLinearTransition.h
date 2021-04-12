/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, HAPCharacteristicValueTransitionLinearStartConditionWrapper, NSString;

@interface HAPCharacteristicValueLinearTransition : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _transitionPoints;
	HAPCharacteristicValueTransitionLinearStartConditionWrapper* _startBehavior;

}

@property (nonatomic,retain) NSMutableArray * transitionPoints;                                                        //@synthesize transitionPoints=_transitionPoints - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueTransitionLinearStartConditionWrapper * startBehavior;              //@synthesize startBehavior=_startBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HAPCharacteristicValueTransitionLinearStartConditionWrapper *)startBehavior;
-(void)setStartBehavior:(HAPCharacteristicValueTransitionLinearStartConditionWrapper *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSMutableArray *)transitionPoints;
-(void)setTransitionPoints:(NSMutableArray *)arg1 ;
-(id)initWithTransitionPoints:(id)arg1 startBehavior:(id)arg2 ;
@end

