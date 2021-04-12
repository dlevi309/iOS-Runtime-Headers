/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKRequest.h>

@class NSArray;

@interface WLKSiriBestPlayablesRequest : WLKRequest {

	NSArray* _statsIDs;

}

@property (nonatomic,copy,readonly) NSArray * statsIDs;              //@synthesize statsIDs=_statsIDs - In the implementation block
-(id)init;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)statsIDs;
-(id)initWithStatsIDs:(id)arg1 ;
@end

