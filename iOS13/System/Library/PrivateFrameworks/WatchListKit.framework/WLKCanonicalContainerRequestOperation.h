/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKCanonicalPlayablesRequestOperation.h>

@class WLKCanonicalContainerResponse;

@interface WLKCanonicalContainerRequestOperation : WLKCanonicalPlayablesRequestOperation {

	WLKCanonicalContainerResponse* _containerResponse;

}

@property (nonatomic,readonly) WLKCanonicalContainerResponse * containerResponse;              //@synthesize containerResponse=_containerResponse - In the implementation block
-(void)processResponse;
-(WLKCanonicalContainerResponse *)containerResponse;
@end

