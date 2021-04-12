/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
*/

#import <Foundation/NSValueTransformer.h>

@interface _IFValueTransformer : NSValueTransformer {

	/*^block*/id _forwardTransformation;
	/*^block*/id _reverseTransformation;

}

@property (nonatomic,copy,readonly) id forwardTransformation;              //@synthesize forwardTransformation=_forwardTransformation - In the implementation block
@property (nonatomic,copy,readonly) id reverseTransformation;              //@synthesize reverseTransformation=_reverseTransformation - In the implementation block
+(BOOL)allowsReverseTransformation;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)reverseTransformation;
-(id)transformedValue:(id)arg1 ;
-(id)initWithForwardTransformation:(/*^block*/id)arg1 reverseTransformation:(/*^block*/id)arg2 ;
-(id)forwardTransformation;
@end

