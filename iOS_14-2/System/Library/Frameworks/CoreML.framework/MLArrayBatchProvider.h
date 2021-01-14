/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLBatchProvider.h>

@class NSArray;

@interface MLArrayBatchProvider : NSObject <MLBatchProvider> {

	NSArray* _array;

}

@property (nonatomic,readonly) NSArray * array;              //@synthesize array=_array - In the implementation block
@property (nonatomic,readonly) long long count; 
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)featuresAtIndex:(long long)arg1 ;
-(NSArray *)array;
-(long long)count;
-(id)initWithFeatureProviderArray:(id)arg1 ;
@end

