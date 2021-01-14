/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@interface PRSL2FeatureVectorProcessingContext : NSObject {

	unsigned short* _expandedFeatureExecutionOrder;
	unsigned long long _expandedFeatureCount;

}

@property (assign,nonatomic) unsigned short* expandedFeatureExecutionOrder;              //@synthesize expandedFeatureExecutionOrder=_expandedFeatureExecutionOrder - In the implementation block
@property (assign,nonatomic) unsigned long long expandedFeatureCount;                    //@synthesize expandedFeatureCount=_expandedFeatureCount - In the implementation block
-(void)setExpandedFeatureCount:(unsigned long long)arg1 ;
-(unsigned long long)expandedFeatureCount;
-(unsigned short*)expandedFeatureExecutionOrder;
-(id)initWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3 ;
-(void)setExpandedFeatureExecutionOrder:(unsigned short*)arg1 ;
-(void)dealloc;
@end

