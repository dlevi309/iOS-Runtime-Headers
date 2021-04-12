/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)bundleID;
-(NSString *)externalID;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithBundleID:(id)arg1 externalID:(id)arg2 ;
@end

