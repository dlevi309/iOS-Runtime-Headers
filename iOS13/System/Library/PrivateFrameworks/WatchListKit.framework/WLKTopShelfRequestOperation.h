/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray;

@interface WLKTopShelfRequestOperation : WLKUTSNetworkRequestOperation {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(id)init;
-(NSArray *)items;
-(void)processResponse;
-(id)initWithQueryParameters:(id)arg1 options:(long long)arg2 ;
@end

