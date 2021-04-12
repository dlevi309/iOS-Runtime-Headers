/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPCollectionDataSource
@property (nonatomic,readonly) BOOL hasMoreIncoming; 
@property (assign,nonatomic,__weak) id<FPCollectionDataSourceDelegate> delegate; 
@required
-(id<FPCollectionDataSourceDelegate>)delegate;
-(void)start;
-(void)setDelegate:(id)arg1;
-(BOOL)hasMoreIncoming;
-(void)enumerationMightHaveResumed;
-(void)invalidate;

@end

