/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformationBlock;
-(id)reverseTransformationBlock;
-(void)setTransformationBlock:(id)arg1 ;
-(void)setReverseTransformationBlock:(id)arg1 ;
@end

