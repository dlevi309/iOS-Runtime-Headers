/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)entityID;
-(unsigned long long)action;
-(id)initWithAction:(unsigned long long)arg1 entityId:(id)arg2 caller:(id)arg3 ;
-(void)processResponse;
@end

