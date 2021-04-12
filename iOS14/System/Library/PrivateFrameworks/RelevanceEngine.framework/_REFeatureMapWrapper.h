/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REMLFeatureProvider.h>

@class NSSet, REFeatureMap, NSString;

@interface _REFeatureMapWrapper : NSObject <REMLFeatureProvider> {

	REFeatureMap* _featureMap;

}

@property (nonatomic,readonly) NSSet * allFeatures; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)valueForFeature:(id)arg1 ;
-(NSSet *)allFeatures;
-(id)initWithFeatureMap:(id)arg1 ;
@end

