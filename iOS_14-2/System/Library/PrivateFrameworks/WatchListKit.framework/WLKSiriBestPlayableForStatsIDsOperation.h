/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

