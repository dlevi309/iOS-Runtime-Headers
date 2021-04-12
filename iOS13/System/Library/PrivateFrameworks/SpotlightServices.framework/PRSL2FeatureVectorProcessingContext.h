/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@interface PRSL2FeatureVectorProcessingContext : NSObject {

	unsigned short* _expandedFeatureExecutionOrder;
	unsigned long long _expandedFeatureCount;

}

@property (assign,nonatomic) unsigned short* expandedFeatureExecutionOrder;              //@synthesize expandedFeatureExecutionOrder=_expandedFeatureExecutionOrder - In the implementation block
@property (assign,nonatomic) unsigned long long expandedFeatureCount;                    //@synthesize expandedFeatureCount=_expandedFeatureCount - In the implementation block
-(void)dealloc;
-(unsigned short*)expandedFeatureExecutionOrder;
-(id)initWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3 ;
-(void)setExpandedFeatureExecutionOrder:(unsigned short*)arg1 ;
-(unsigned long long)expandedFeatureCount;
-(void)setExpandedFeatureCount:(unsigned long long)arg1 ;
@end

