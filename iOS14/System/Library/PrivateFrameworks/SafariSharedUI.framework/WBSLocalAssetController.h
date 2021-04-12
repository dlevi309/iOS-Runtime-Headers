/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSMobileAssetControllerProtocol.h>

@protocol OS_dispatch_queue, WBSMobileAssetControllerDelegate;
@class NSDate, NSURL, NSObject;

@interface WBSLocalAssetController : NSObject <WBSMobileAssetControllerProtocol> {

	NSURL* _url;
	NSObject*<OS_dispatch_queue> _queue;
	id<WBSMobileAssetControllerDelegate> _delegate;

}

@property (__weak) id<WBSMobileAssetControllerDelegate> delegate; 
@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (nonatomic,readonly) double updateInterval; 
-(NSDate *)lastUpdateDate;
-(double)updateInterval;
-(id)initWithURL:(id)arg1 ;
-(id<WBSMobileAssetControllerDelegate>)delegate;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)setDelegate:(id<WBSMobileAssetControllerDelegate>)arg1 ;
-(void)queryURL:(/*^block*/id)arg1 ;
@end

