/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
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
-(void)dealloc;
-(id)description;
-(NSISVariable *)variable;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(NSString *)variableDescription;
-(BOOL)variableIsUserObservable;
-(int)orientationHint;
-(NSString *)markedConstraintDescription;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(id)firstItem;
-(id)secondItem;
-(void)_addToEngine:(id)arg1 ;
-(void)setVariable:(NSISVariable *)arg1 ;
-(void)setVariableDescription:(NSString *)arg1 ;
-(void)setMarkedConstraintDescription:(NSString *)arg1 ;
-(void)setVariableIsUserObservable:(BOOL)arg1 ;
-(void)setOrientationHint:(int)arg1 ;
@end

