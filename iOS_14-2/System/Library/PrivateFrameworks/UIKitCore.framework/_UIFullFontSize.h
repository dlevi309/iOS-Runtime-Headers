/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIFullFontSize : NSObject {

	double _value;
	BOOL _isDefault;
	BOOL _needsEvaluation;

}
+(id)valued:(double)arg1 ;
+(id)defaultValue;
-(double)valueWithEvaluationIfNeeded:(/*^block*/id)arg1 ;
-(id)initWithValue:(double)arg1 isDefault:(BOOL)arg2 ;
-(id)overrideUnlessDefault:(double)arg1 ;
-(BOOL)needsEvaluation;
-(BOOL)setNeedsEvaluation;
-(BOOL)isEqual:(id)arg1 ;
@end

