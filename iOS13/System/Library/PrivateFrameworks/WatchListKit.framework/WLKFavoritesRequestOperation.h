/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray;

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation {

	NSArray* _favorites;

}

@property (nonatomic,readonly) NSArray * favorites;              //@synthesize favorites=_favorites - In the implementation block
-(NSArray *)favorites;
-(id)initWithCaller:(id)arg1 ;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
-(void)processResponse;
@end

