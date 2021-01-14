/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@class NSString, NSArray, MLModelConfiguration;

@interface PFLUpdateConfiguration : NSObject {

	NSString* _identifier;
	NSArray* _layerNames;
	double _normMax;
	unsigned long long _normBinCount;
	MLModelConfiguration* _modelConfiguration;

}

@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * layerNames;                                   //@synthesize layerNames=_layerNames - In the implementation block
@property (nonatomic,readonly) double normMax;                                         //@synthesize normMax=_normMax - In the implementation block
@property (nonatomic,readonly) unsigned long long normBinCount;                        //@synthesize normBinCount=_normBinCount - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * modelConfiguration;              //@synthesize modelConfiguration=_modelConfiguration - In the implementation block
-(NSArray *)layerNames;
-(MLModelConfiguration *)modelConfiguration;
-(NSString *)identifier;
-(double)normMax;
-(unsigned long long)normBinCount;
-(id)initWithIdentifier:(id)arg1 layerNames:(id)arg2 normMax:(double)arg3 normBinCount:(unsigned long long)arg4 modelConfiguration:(id)arg5 ;
@end

