/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@interface MPUDataSourceInvalidationContext : NSObject {

	BOOL _invalidateEverything;
	BOOL _invalidateDataSourceCounts;

}

@property (nonatomic,readonly) BOOL invalidateEverything;                    //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
@property (nonatomic,readonly) BOOL invalidateDataSourceCounts;              //@synthesize invalidateDataSourceCounts=_invalidateDataSourceCounts - In the implementation block
-(BOOL)invalidateEverything;
-(BOOL)invalidateDataSourceCounts;
-(void)setInvalidateEverything:(BOOL)arg1 ;
-(void)setInvalidateDataSourceCounts:(BOOL)arg1 ;
@end

