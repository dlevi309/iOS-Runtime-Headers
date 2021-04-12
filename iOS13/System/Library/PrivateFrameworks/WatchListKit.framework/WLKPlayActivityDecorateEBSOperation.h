/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKPlayActivityDecorateEBSOperation : WLKUTSNetworkRequestOperation {

	NSString* _channelID;
	NSString* _externalContentID;

}

@property (nonatomic,copy,readonly) NSString * channelID;                      //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalContentID;              //@synthesize externalContentID=_externalContentID - In the implementation block
-(NSString *)channelID;
-(id)initWithChannelID:(id)arg1 externalContentID:(id)arg2 ;
-(NSString *)externalContentID;
@end

