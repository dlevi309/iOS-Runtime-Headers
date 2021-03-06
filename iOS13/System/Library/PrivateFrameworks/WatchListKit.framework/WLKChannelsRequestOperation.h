/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKChannelsResponse, NSString;

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation {

	BOOL _filtered;
	WLKChannelsResponse* _channelsResponse;
	NSString* _caller;

}

@property (nonatomic,copy) NSString * caller;                                     //@synthesize caller=_caller - In the implementation block
@property (assign,nonatomic) BOOL filtered;                                       //@synthesize filtered=_filtered - In the implementation block
@property (nonatomic,retain) WLKChannelsResponse * channelsResponse;              //@synthesize channelsResponse=_channelsResponse - In the implementation block
-(BOOL)filtered;
-(void)setFiltered:(BOOL)arg1 ;
-(NSString *)caller;
-(void)setCaller:(NSString *)arg1 ;
-(id)initWithCaller:(id)arg1 ;
-(void)processResponse;
-(id)initWithCaller:(id)arg1 filtered:(BOOL)arg2 ;
-(void)setChannelsResponse:(WLKChannelsResponse *)arg1 ;
-(WLKChannelsResponse *)channelsResponse;
@end

