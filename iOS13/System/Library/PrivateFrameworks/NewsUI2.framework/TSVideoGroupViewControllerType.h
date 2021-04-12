/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

@class NSString;


@protocol TSVideoGroupViewControllerType
@property (retain,nonatomic) id<TSVideoGroupViewControllerDelegate> routableDelegate; 
@property (retain,nonatomic) id<TSGroupRankProvider> groupRankProvider; 
@property (copy,nonatomic) NSString * feedViewExposureID; 
@required
-(NSString *)feedViewExposureID;
-(id<TSVideoGroupViewControllerDelegate>)routableDelegate;
-(void)setRoutableDelegate:(id)arg1;
-(id<TSGroupRankProvider>)groupRankProvider;
-(void)setGroupRankProvider:(id)arg1;
-(void)setFeedViewExposureID:(id)arg1;

@end

