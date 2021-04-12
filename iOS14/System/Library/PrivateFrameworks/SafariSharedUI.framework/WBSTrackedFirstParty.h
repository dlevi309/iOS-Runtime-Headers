/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSTrackingCapableFirstParty.h>

@class NSArray;

@interface WBSTrackedFirstParty : WBSTrackingCapableFirstParty {

	NSArray* _trackers;

}

@property (nonatomic,copy) NSArray * trackers;              //@synthesize trackers=_trackers - In the implementation block
-(id)initWithDomain:(id)arg1 ;
-(NSArray *)trackers;
-(id)initWithDomain:(id)arg1 trackers:(id)arg2 ;
-(void)setTrackers:(NSArray *)arg1 ;
@end

