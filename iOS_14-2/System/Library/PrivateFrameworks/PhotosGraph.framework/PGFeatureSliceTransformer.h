/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGFeatureTransformer.h>

@class NSString;

@interface PGFeatureSliceTransformer : NSObject <PGFeatureTransformer> {

	long long _fromIndex;
	long long _toIndex;

}

@property (nonatomic,readonly) long long fromIndex;                 //@synthesize fromIndex=_fromIndex - In the implementation block
@property (nonatomic,readonly) long long toIndex;                   //@synthesize toIndex=_toIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)name;
+(id)instanceWithParameters:(id)arg1 error:(id*)arg2 ;
-(long long)toIndex;
-(id)init;
-(long long)fromIndex;
-(id)floatVectorWithFloatVector:(id)arg1 error:(id*)arg2 ;
-(id)initFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2 ;
@end

