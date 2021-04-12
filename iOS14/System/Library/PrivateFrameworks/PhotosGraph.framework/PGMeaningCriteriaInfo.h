/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString;

@interface PGMeaningCriteriaInfo : NSObject {

	NSString* _meaningLabel;
	double _version;
	unsigned long long _criteriaNumber;

}

@property (nonatomic,retain) NSString * meaningLabel;                        //@synthesize meaningLabel=_meaningLabel - In the implementation block
@property (assign,nonatomic) double version;                                 //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long criteriaNumber;              //@synthesize criteriaNumber=_criteriaNumber - In the implementation block
-(void)setVersion:(double)arg1 ;
-(double)version;
-(NSString *)meaningLabel;
-(void)setMeaningLabel:(NSString *)arg1 ;
-(unsigned long long)criteriaNumber;
-(void)setCriteriaNumber:(unsigned long long)arg1 ;
@end

