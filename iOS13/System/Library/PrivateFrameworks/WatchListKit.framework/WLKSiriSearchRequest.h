/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKRequest.h>

@class NSDictionary;

@interface WLKSiriSearchRequest : WLKRequest {

	NSDictionary* _query;

}

@property (nonatomic,copy,readonly) NSDictionary * query;              //@synthesize query=_query - In the implementation block
-(NSDictionary *)query;
-(id)initWithQuery:(id)arg1 ;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
@end

