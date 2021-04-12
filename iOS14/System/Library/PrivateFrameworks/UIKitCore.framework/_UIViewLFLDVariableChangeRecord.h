/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithVariable:(id)arg1 inLayoutEngine:(id)arg2 ;
-(UIView *)variableDelegate;
-(id)description;
-(NSISVariable *)variable;
-(double)value;
@end

