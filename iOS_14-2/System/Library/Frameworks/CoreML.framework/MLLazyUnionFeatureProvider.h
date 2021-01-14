/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@protocol MLFeatureProvider;
@class NSSet;

@interface MLLazyUnionFeatureProvider : NSObject <MLFeatureProvider> {

	id<MLFeatureProvider> _first;
	id<MLFeatureProvider> _second;

}

@property (nonatomic,retain) id<MLFeatureProvider> first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,retain) id<MLFeatureProvider> second;              //@synthesize second=_second - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(id<MLFeatureProvider>)second;
-(id<MLFeatureProvider>)first;
-(NSSet *)featureNames;
-(void)setFirst:(id<MLFeatureProvider>)arg1 ;
-(id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2 ;
-(id)unionFeatureProvider;
-(void)setSecond:(id<MLFeatureProvider>)arg1 ;
@end

