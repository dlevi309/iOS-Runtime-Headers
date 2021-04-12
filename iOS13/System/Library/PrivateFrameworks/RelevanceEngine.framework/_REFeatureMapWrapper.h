/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REMLFeatureProvider.h>

@class NSSet, REFeatureMap, NSString;

@interface _REFeatureMapWrapper : NSObject <REMLFeatureProvider> {

	REFeatureMap* _featureMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * allFeatures; 
-(id)valueForFeature:(id)arg1 ;
-(id)initWithFeatureMap:(id)arg1 ;
-(NSSet *)allFeatures;
@end

