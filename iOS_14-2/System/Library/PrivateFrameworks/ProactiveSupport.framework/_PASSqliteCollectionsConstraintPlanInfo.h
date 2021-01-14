/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@interface _PASSqliteCollectionsConstraintPlanInfo : NSObject {

	BOOL _unique;
	BOOL _omit;
	double _estimatedRows;
	double _estimatedCost;

}

@property (assign,nonatomic) double estimatedRows;              //@synthesize estimatedRows=_estimatedRows - In the implementation block
@property (assign,nonatomic) double estimatedCost;              //@synthesize estimatedCost=_estimatedCost - In the implementation block
@property (assign,nonatomic) BOOL unique;                       //@synthesize unique=_unique - In the implementation block
@property (assign,nonatomic) BOOL omit;                         //@synthesize omit=_omit - In the implementation block
-(BOOL)omit;
-(void)setOmit:(BOOL)arg1 ;
-(BOOL)unique;
-(id)initWithEstimatedRows:(double)arg1 estimatedCost:(double)arg2 unique:(BOOL)arg3 omit:(BOOL)arg4 ;
-(double)estimatedRows;
-(void)setEstimatedRows:(double)arg1 ;
-(double)estimatedCost;
-(void)setEstimatedCost:(double)arg1 ;
-(void)setUnique:(BOOL)arg1 ;
@end

