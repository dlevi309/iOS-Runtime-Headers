/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@interface MPUDataSourceInvalidationContext : NSObject {

	BOOL _invalidateEverything;
	BOOL _invalidateDataSourceCounts;

}

@property (nonatomic,readonly) BOOL invalidateEverything;                    //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
@property (nonatomic,readonly) BOOL invalidateDataSourceCounts;              //@synthesize invalidateDataSourceCounts=_invalidateDataSourceCounts - In the implementation block
-(BOOL)invalidateDataSourceCounts;
-(void)setInvalidateEverything:(BOOL)arg1 ;
-(BOOL)invalidateEverything;
-(void)setInvalidateDataSourceCounts:(BOOL)arg1 ;
@end

