/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIFullFontSize : NSObject {

	double _value;
	BOOL _isDefault;
	BOOL _needsEvaluation;

}
+(id)defaultValue;
+(id)valued:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)setNeedsEvaluation;
-(BOOL)needsEvaluation;
-(double)valueWithEvaluationIfNeeded:(/*^block*/id)arg1 ;
-(id)overrideUnlessDefault:(double)arg1 ;
-(id)initWithValue:(double)arg1 isDefault:(BOOL)arg2 ;
@end

