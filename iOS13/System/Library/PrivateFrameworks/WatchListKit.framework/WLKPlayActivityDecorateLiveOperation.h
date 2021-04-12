/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKPlayActivityDecorateLiveOperation : WLKUTSNetworkRequestOperation {

	NSString* _channelID;
	NSString* _serviceID;

}

@property (nonatomic,copy,readonly) NSString * channelID;              //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceID;              //@synthesize serviceID=_serviceID - In the implementation block
-(NSString *)serviceID;
-(NSString *)channelID;
-(id)initWithChannelID:(id)arg1 serviceID:(id)arg2 ;
@end

