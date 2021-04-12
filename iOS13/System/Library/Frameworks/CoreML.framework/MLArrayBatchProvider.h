/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLBatchProvider.h>

@class NSArray;

@interface MLArrayBatchProvider : NSObject <MLBatchProvider> {

	NSArray* _array;

}

@property (nonatomic,readonly) NSArray * array;              //@synthesize array=_array - In the implementation block
@property (nonatomic,readonly) long long count; 
-(long long)count;
-(NSArray *)array;
-(id)featuresAtIndex:(long long)arg1 ;
-(id)initWithFeatureProviderArray:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
@end

