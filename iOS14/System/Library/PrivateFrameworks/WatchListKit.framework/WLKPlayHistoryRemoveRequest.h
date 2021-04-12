/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKPlayHistoryRemoveRequest : WLKRequest {

	NSString* _channelID;
	NSString* _bundleID;
	NSString* _externalID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;              //@synthesize externalID=_externalID - In the implementation block
-(NSString *)externalID;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 externalID:(id)arg2 ;
@end

