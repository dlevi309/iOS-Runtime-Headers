/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@interface HFValueTransformer : NSObject {

	Class _valueClass;
	/*^block*/id _transformBlock;
	/*^block*/id _reverseTransformBlock;

}

@property (nonatomic,retain) Class valueClass;                    //@synthesize valueClass=_valueClass - In the implementation block
@property (nonatomic,copy) id transformBlock;                     //@synthesize transformBlock=_transformBlock - In the implementation block
@property (nonatomic,copy) id reverseTransformBlock;              //@synthesize reverseTransformBlock=_reverseTransformBlock - In the implementation block
+(id)transformerForValueClass:(Class)arg1 transformBlock:(/*^block*/id)arg2 reverseTransformBlock:(/*^block*/id)arg3 ;
+(id)identityTransformer;
-(Class)valueClass;
-(void)setValueClass:(Class)arg1 ;
-(void)setTransformBlock:(id)arg1 ;
-(id)transformBlock;
-(void)setReverseTransformBlock:(id)arg1 ;
-(id)reverseTransformBlock;
-(id)transformedValueForValue:(id)arg1 ;
-(id)valueForTransformedValue:(id)arg1 ;
@end

