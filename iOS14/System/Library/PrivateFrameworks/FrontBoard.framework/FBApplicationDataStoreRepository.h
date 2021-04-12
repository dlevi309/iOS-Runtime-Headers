/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@protocol FBApplicationDataStoreRepository <FBApplicationDataStoreRepositoryReading,FBApplicationDataStoreRepositoryWriting>
@property (assign,nonatomic,__weak) id<FBApplicationDataStoreRepositoryDelegate> delegate; 
@required
-(id<FBApplicationDataStoreRepositoryDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

