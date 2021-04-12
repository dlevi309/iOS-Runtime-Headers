/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSArray;


@protocol FCBundleChannelProviderType
@property (nonatomic,readonly) NSArray * bundleChannelIDs; 
@property (assign,nonatomic,__weak) id<FCBundleChannelProviderDelegate> delegate; 
@required
-(id<FCBundleChannelProviderDelegate>)delegate;
-(void)loadInitialBundleChannelIDsWithCompletion:(/*^block*/id)arg1;
-(NSArray *)bundleChannelIDs;
-(void)setDelegate:(id)arg1;

@end

