/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@interface PGConfiguration : NSObject {

	double _version;

}

@property (nonatomic,readonly) double version;              //@synthesize version=_version - In the implementation block
+(id)name;
+(id)_persistedConfigurationPath;
+(id)persistedConfiguration;
-(id)description;
-(id)_configurationDictionary;
-(id)propertyKeys;
-(double)version;
-(id)initWithSources:(id)arg1 version:(double)arg2 ;
-(void)_configureWithSource:(id)arg1 propertyKeys:(id)arg2 ;
-(void)persistConfiguration;
-(void)deletePersistedConfiguration;
@end

