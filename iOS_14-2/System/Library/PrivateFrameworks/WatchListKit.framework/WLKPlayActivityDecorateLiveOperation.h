/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

