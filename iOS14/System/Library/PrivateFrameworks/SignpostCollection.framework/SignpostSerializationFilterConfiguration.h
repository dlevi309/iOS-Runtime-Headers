/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection
*/


@class SignpostSupportSubsystemCategoryFilter, SignpostSupportPIDFilter, SignpostSupportUniquePIDFilter, SignpostSupportExactProcessNameFilter;

@interface SignpostSerializationFilterConfiguration : NSObject {

	SignpostSupportSubsystemCategoryFilter* _subsystemCategoryFilter;
	SignpostSupportPIDFilter* _pidFilter;
	SignpostSupportUniquePIDFilter* _uniquePidFilter;
	SignpostSupportExactProcessNameFilter* _processNameFilter;

}

@property (nonatomic,retain) SignpostSupportSubsystemCategoryFilter * subsystemCategoryFilter;              //@synthesize subsystemCategoryFilter=_subsystemCategoryFilter - In the implementation block
@property (nonatomic,retain) SignpostSupportPIDFilter * pidFilter;                                          //@synthesize pidFilter=_pidFilter - In the implementation block
@property (nonatomic,retain) SignpostSupportUniquePIDFilter * uniquePidFilter;                              //@synthesize uniquePidFilter=_uniquePidFilter - In the implementation block
@property (nonatomic,retain) SignpostSupportExactProcessNameFilter * processNameFilter;                     //@synthesize processNameFilter=_processNameFilter - In the implementation block
-(void)setSubsystemCategoryFilter:(SignpostSupportSubsystemCategoryFilter *)arg1 ;
-(SignpostSupportSubsystemCategoryFilter *)subsystemCategoryFilter;
-(SignpostSupportPIDFilter *)pidFilter;
-(void)setPidFilter:(SignpostSupportPIDFilter *)arg1 ;
-(SignpostSupportUniquePIDFilter *)uniquePidFilter;
-(void)setUniquePidFilter:(SignpostSupportUniquePIDFilter *)arg1 ;
-(SignpostSupportExactProcessNameFilter *)processNameFilter;
-(void)setProcessNameFilter:(SignpostSupportExactProcessNameFilter *)arg1 ;
@end

