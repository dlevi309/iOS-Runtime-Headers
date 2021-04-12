/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSISVariableDelegate;
@class NSMapTable, NSISEngine, NSArray;

@interface NSISVariable : NSObject <NSCoding> {

	id<NSISVariableDelegate> _delegate;
	NSMapTable* _overflowEngines;
	NSISEngine* _engines[3];
	os_unfair_lock_s _engineVarIndexes[3];
	unsigned _ident;

}

@property (assign) id<NSISVariableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL shouldBeMinimized; 
@property (readonly) int valueRestriction; 
@property (readonly) int orientationHint; 
@property (readonly) NSArray * engines; 
+(id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 valueIsUserObservable:(BOOL)arg4 ;
+(id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 ;
+(id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 ;
+(id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSISVariableDelegate>)delegate;
-(void)setDelegate:(id<NSISVariableDelegate>)arg1 ;
-(BOOL)shouldBeMinimized;
-(int)orientationHint;
-(id)markedConstraint;
-(BOOL)valueIsUserVisible;
-(int)valueRestriction;
-(os_unfair_lock_s)overflowEngineVarIndexForEngine:(id)arg1 ;
-(id)descriptionInEngine:(id)arg1 ;
-(void)_enumerateEngines:(/*^block*/id)arg1 ;
-(id)_delegateDescription;
-(NSArray *)engines;
-(BOOL)shouldBeIntegral;
-(double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
-(BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
@end

