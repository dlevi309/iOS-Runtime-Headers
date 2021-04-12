/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIViewLFLDChangeRecord.h>

@class NSISVariable, UIView;

@interface _UIViewLFLDVariableChangeRecord : _UIViewLFLDChangeRecord {

	NSISVariable* _variable;
	double _value;
	UIView* _variableDelegate;

}

@property (nonatomic,readonly) NSISVariable * variable;                //@synthesize variable=_variable - In the implementation block
@property (nonatomic,readonly) double value;                           //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) UIView * variableDelegate;              //@synthesize variableDelegate=_variableDelegate - In the implementation block
-(id)description;
-(double)value;
-(NSISVariable *)variable;
-(id)initWithVariable:(id)arg1 inLayoutEngine:(id)arg2 ;
-(UIView *)variableDelegate;
@end

