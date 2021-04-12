/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

