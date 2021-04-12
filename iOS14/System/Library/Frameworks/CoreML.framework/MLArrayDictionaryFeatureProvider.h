/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLBatchProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MLArrayDictionaryFeatureProvider : NSObject <MLBatchProvider, NSSecureCoding> {

	NSArray* _array;

}

@property (nonatomic,readonly) NSArray * array;              //@synthesize array=_array - In the implementation block
@property (nonatomic,readonly) long long count; 
+(BOOL)supportsSecureCoding;
-(id)featuresAtIndex:(long long)arg1 ;
-(id)initWithDictionaryFeatureProviderArray:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)array;
-(long long)count;
-(id)initWithCoder:(id)arg1 ;
@end

