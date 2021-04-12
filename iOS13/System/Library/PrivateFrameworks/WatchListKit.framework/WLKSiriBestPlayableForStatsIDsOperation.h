/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, WLKSiriBestPlayablesResponse;

@interface WLKSiriBestPlayableForStatsIDsOperation : WLKUTSNetworkRequestOperation {

	NSArray* _statsIDs;
	WLKSiriBestPlayablesResponse* _response;

}

@property (nonatomic,copy,readonly) NSArray * statsIDs;                              //@synthesize statsIDs=_statsIDs - In the implementation block
@property (nonatomic,readonly) WLKSiriBestPlayablesResponse * response;              //@synthesize response=_response - In the implementation block
-(WLKSiriBestPlayablesResponse *)response;
-(void)processResponse;
-(id)initWithStatsIDs:(id)arg1 caller:(id)arg2 ;
-(NSArray *)statsIDs;
@end

