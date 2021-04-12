/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <Foundation/NSValueTransformer.h>
#import <libobjc.A.dylib/MTLTransformerErrorHandling.h>

@class NSString;

@interface MTLValueTransformer : NSValueTransformer <MTLTransformerErrorHandling> {

	/*^block*/id _forwardBlock;
	/*^block*/id _reverseBlock;

}

@property (nonatomic,copy,readonly) id forwardBlock;                //@synthesize forwardBlock=_forwardBlock - In the implementation block
@property (nonatomic,copy,readonly) id reverseBlock;                //@synthesize reverseBlock=_reverseBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
+(id)transformerUsingForwardBlock:(/*^block*/id)arg1 reverseBlock:(/*^block*/id)arg2 ;
+(id)transformerUsingForwardBlock:(/*^block*/id)arg1 ;
+(id)transformerUsingReversibleBlock:(/*^block*/id)arg1 ;
+(id)transformerWithBlock:(/*^block*/id)arg1 ;
+(id)reversibleTransformerWithBlock:(/*^block*/id)arg1 ;
+(id)reversibleTransformerWithForwardBlock:(/*^block*/id)arg1 reverseBlock:(/*^block*/id)arg2 ;
-(id)transformedValue:(id)arg1 ;
-(id)initWithForwardBlock:(/*^block*/id)arg1 reverseBlock:(/*^block*/id)arg2 ;
-(id)reverseBlock;
-(id)transformedValue:(id)arg1 success:(BOOL*)arg2 error:(id*)arg3 ;
-(id)forwardBlock;
@end

