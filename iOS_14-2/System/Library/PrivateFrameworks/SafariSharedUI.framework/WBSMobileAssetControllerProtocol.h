/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

@class NSDate;


@protocol WBSMobileAssetControllerProtocol
@property (__weak) id<WBSMobileAssetControllerDelegate> delegate; 
@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (nonatomic,readonly) double updateInterval; 
@required
-(NSDate *)lastUpdateDate;
-(double)updateInterval;
-(id<WBSMobileAssetControllerDelegate>)delegate;
-(void)setLastUpdateDate:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)queryURL:(/*^block*/id)arg1;

@end

