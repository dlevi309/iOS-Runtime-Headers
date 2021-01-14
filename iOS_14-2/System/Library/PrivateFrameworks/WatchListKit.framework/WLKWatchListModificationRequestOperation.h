/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKWatchListModificationResponse;

@interface WLKWatchListModificationRequestOperation : WLKUTSNetworkRequestOperation {

	unsigned long long _action;
	NSString* _itemID;
	WLKWatchListModificationResponse* _response;

}

@property (nonatomic,readonly) unsigned long long action;                                //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemID;                                   //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) WLKWatchListModificationResponse * response;              //@synthesize response=_response - In the implementation block
-(unsigned long long)action;
-(NSString *)itemID;
-(WLKWatchListModificationResponse *)response;
-(id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2 caller:(id)arg3 ;
-(void)processResponse;
-(id)initWithAction:(unsigned long long)arg1 identifier:(id)arg2 caller:(id)arg3 ;
-(id)initWithAction:(unsigned long long)arg1 statsID:(id)arg2 caller:(id)arg3 ;
-(id)initWithAction:(unsigned long long)arg1 channelID:(id)arg2 externalID:(id)arg3 caller:(id)arg4 ;
@end

