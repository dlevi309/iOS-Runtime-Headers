/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSISVariableDelegate;
@class NSMapTable, NSISEngine, NSArray;

@interface NSISVariable : NSObject <NSCoding> {

	id<NSISVariableDelegate> _delegate;
	NSMapTable* _overflowEngines;
	NSISEngine* _engines[3];
	SCD_Struct_NS0 _engineVarIndexes[3];
	unsigned _ident;

}

@property (assign) id<NSISVariableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL shouldBeMinimized; 
@property (readonly) int valueRestriction; 
@property (readonly) int orientationHint; 
@property (readonly) NSArray * engines; 
+(id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 ;
+(id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 valueIsUserObservable:(BOOL)arg4 ;
+(id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 ;
+(id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 ;
-(id)init;
-(int)valueRestriction;
-(id<NSISVariableDelegate>)delegate;
-(BOOL)shouldBeIntegral;
-(BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
-(void)encodeWithCoder:(id)arg1 ;
-(id)markedConstraint;
-(SCD_Struct_NS0)overflowEngineVarIndexForEngine:(id)arg1 ;
-(void)setDelegate:(id<NSISVariableDelegate>)arg1 ;
-(double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
-(BOOL)shouldBeMinimized;
-(id)description;
-(NSArray *)engines;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionInEngine:(id)arg1 ;
-(int)orientationHint;
-(BOOL)valueIsUserVisible;
-(void)dealloc;
@end

