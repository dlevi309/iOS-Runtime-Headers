/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)initWithForwardTransformation:(/*^block*/id)arg1 reverseTransformation:(/*^block*/id)arg2 ;
-(id)forwardTransformation;
-(id)reverseTransformation;
@end

