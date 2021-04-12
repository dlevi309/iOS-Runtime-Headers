/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithQueryParameters:(id)arg1 options:(long long)arg2 ;
-(void)processResponse;
@end

