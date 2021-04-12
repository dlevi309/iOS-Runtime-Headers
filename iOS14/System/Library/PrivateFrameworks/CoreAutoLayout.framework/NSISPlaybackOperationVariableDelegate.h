/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/


@class NSISVariable, NSString;

@interface NSISPlaybackOperationVariableDelegate : NSObject {

	NSISVariable* _variable;
	NSString* _variableDescription;
	NSString* _markedConstraintDescription;
	BOOL _variableIsUserObservable;
	int _orientationHint;

}

@property (retain) NSISVariable * variable;                           //@synthesize variable=_variable - In the implementation block
@property (copy) NSString * variableDescription;                      //@synthesize variableDescription=_variableDescription - In the implementation block
@property (copy) NSString * markedConstraintDescription;              //@synthesize markedConstraintDescription=_markedConstraintDescription - In the implementation block
@property (assign) BOOL variableIsUserObservable;                     //@synthesize variableIsUserObservable=_variableIsUserObservable - In the implementation block
@property (assign) int orientationHint;                               //@synthesize orientationHint=_orientationHint - In the implementation block
-(id)firstItem;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)_addToEngine:(id)arg1 ;
-(id)secondItem;
-(id)description;
-(int)orientationHint;
-(NSString *)variableDescription;
-(BOOL)variableIsUserObservable;
-(NSString *)markedConstraintDescription;
-(void)setVariable:(NSISVariable *)arg1 ;
-(void)setVariableDescription:(NSString *)arg1 ;
-(void)setMarkedConstraintDescription:(NSString *)arg1 ;
-(void)setVariableIsUserObservable:(BOOL)arg1 ;
-(void)setOrientationHint:(int)arg1 ;
-(NSISVariable *)variable;
-(void)dealloc;
@end

