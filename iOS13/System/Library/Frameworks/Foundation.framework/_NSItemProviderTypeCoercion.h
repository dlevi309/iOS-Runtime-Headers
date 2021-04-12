/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface _NSItemProviderTypeCoercion : NSObject {

	id _value;
	Class _targetClass;

}

@property (retain) id value;                     //@synthesize value=_value - In the implementation block
@property (copy) Class targetClass;              //@synthesize targetClass=_targetClass - In the implementation block
+(id)typeCoercionForValue:(id)arg1 targetClass:(Class)arg2 ;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)coerceValueError:(id*)arg1 ;
-(BOOL)shouldCoerceForCoding;
-(void)setTargetClass:(Class)arg1 ;
-(Class)targetClass;
-(id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)arg1 error:(id*)arg2 ;
@end

