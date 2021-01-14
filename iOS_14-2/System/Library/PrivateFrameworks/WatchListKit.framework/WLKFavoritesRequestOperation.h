/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray;

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation {

	NSArray* _favorites;

}

@property (nonatomic,readonly) NSArray * favorites;              //@synthesize favorites=_favorites - In the implementation block
-(NSArray *)favorites;
-(void)processResponse;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
-(id)initWithCaller:(id)arg1 ;
@end

