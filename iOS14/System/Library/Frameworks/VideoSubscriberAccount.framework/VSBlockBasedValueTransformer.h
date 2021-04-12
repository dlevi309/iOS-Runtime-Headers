/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <Foundation/NSValueTransformer.h>

@interface VSBlockBasedValueTransformer : NSValueTransformer {

	/*^block*/id _transformationBlock;
	/*^block*/id _reverseTransformationBlock;

}

@property (nonatomic,copy) id transformationBlock;                     //@synthesize transformationBlock=_transformationBlock - In the implementation block
@property (nonatomic,copy) id reverseTransformationBlock;              //@synthesize reverseTransformationBlock=_reverseTransformationBlock - In the implementation block
-(id)init;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformationBlock;
-(void)setTransformationBlock:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformationBlock;
-(void)setReverseTransformationBlock:(id)arg1 ;
@end

