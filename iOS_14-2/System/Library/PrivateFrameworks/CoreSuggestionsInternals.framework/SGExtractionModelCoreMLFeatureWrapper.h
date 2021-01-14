/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface SGExtractionModelCoreMLFeatureWrapper : NSObject <MLFeatureProvider> {

	NSDictionary* _featureDict;

}

@property (nonatomic,readonly) NSDictionary * featureDict;              //@synthesize featureDict=_featureDict - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(id)initWithFeatureProvider:(id)arg1 ;
-(NSSet *)featureNames;
-(id)valueForKey:(id)arg1 ;
-(NSDictionary *)featureDict;
-(id)initWithFeatureDict:(id)arg1 ;
@end

