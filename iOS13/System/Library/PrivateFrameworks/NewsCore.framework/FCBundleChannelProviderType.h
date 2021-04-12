/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSArray;


@protocol FCBundleChannelProviderType
@property (nonatomic,readonly) NSArray * bundleChannelIDs; 
@property (assign,nonatomic,__weak) id<FCBundleChannelProviderDelegate> delegate; 
@required
-(id<FCBundleChannelProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSArray *)bundleChannelIDs;
-(void)loadInitialBundleChannelIDsWithCompletion:(/*^block*/id)arg1;

@end

