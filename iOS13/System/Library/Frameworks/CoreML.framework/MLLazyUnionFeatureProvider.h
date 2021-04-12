/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setSecond:(id<MLFeatureProvider>)arg1 ;
-(id<MLFeatureProvider>)second;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2 ;
-(id)unionFeatureProvider;
-(id<MLFeatureProvider>)first;
-(void)setFirst:(id<MLFeatureProvider>)arg1 ;
@end

