/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

