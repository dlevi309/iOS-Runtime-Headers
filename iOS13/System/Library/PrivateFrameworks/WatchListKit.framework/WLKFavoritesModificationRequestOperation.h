/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKFavoritesModificationRequestOperation : WLKUTSNetworkRequestOperation {

	unsigned long long _action;
	NSString* _entityID;

}

@property (nonatomic,readonly) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityID;               //@synthesize entityID=_entityID - In the implementation block
-(unsigned long long)action;
-(NSString *)entityID;
-(id)initWithAction:(unsigned long long)arg1 entityId:(id)arg2 caller:(id)arg3 ;
-(void)processResponse;
@end

