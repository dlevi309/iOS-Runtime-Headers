/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPCollectionDataSource
@property (nonatomic,readonly) BOOL hasMoreIncoming; 
@property (assign,nonatomic,__weak) id<FPCollectionDataSourceDelegate> delegate; 
@required
-(void)invalidate;
-(id<FPCollectionDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)start;
-(void)enumerationMightHaveResumed;
-(BOOL)hasMoreIncoming;

@end

