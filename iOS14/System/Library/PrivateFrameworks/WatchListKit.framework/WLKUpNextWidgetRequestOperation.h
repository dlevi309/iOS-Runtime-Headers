/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKUpNextItemCollection;

@interface WLKUpNextWidgetRequestOperation : WLKUTSNetworkRequestOperation {

	WLKUpNextItemCollection* _itemCollection;

}

@property (nonatomic,readonly) WLKUpNextItemCollection * itemCollection;              //@synthesize itemCollection=_itemCollection - In the implementation block
-(id)init;
-(WLKUpNextItemCollection *)itemCollection;
-(id)initWithQueryParameters:(id)arg1 options:(long long)arg2 ;
-(void)processResponse;
@end

