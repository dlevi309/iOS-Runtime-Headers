/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface FaceRecognizabilityFilterSVMOutput : NSObject <MLFeatureProvider> {

	long long _classLabel;
	NSDictionary* _classProbability;

}

@property (assign,nonatomic) long long classLabel;                         //@synthesize classLabel=_classLabel - In the implementation block
@property (nonatomic,retain) NSDictionary * classProbability;              //@synthesize classProbability=_classProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSDictionary *)classProbability;
-(void)setClassLabel:(long long)arg1 ;
-(long long)classLabel;
-(void)setClassProbability:(NSDictionary *)arg1 ;
-(id)initWithClassLabel:(long long)arg1 classProbability:(id)arg2 ;
@end

