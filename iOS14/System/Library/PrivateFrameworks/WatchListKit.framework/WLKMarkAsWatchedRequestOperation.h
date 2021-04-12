/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKMarkAsWatchedRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _itemID;
	NSString* _brandID;

}

@property (nonatomic,copy,readonly) NSString * itemID;               //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy,readonly) NSString * brandID;              //@synthesize brandID=_brandID - In the implementation block
-(NSString *)itemID;
-(NSString *)brandID;
-(id)initWithItemID:(id)arg1 itemType:(id)arg2 brandID:(id)arg3 caller:(id)arg4 ;
@end

