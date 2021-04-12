/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithItemID:(id)arg1 itemType:(id)arg2 brandID:(id)arg3 caller:(id)arg4 ;
-(NSString *)brandID;
@end

