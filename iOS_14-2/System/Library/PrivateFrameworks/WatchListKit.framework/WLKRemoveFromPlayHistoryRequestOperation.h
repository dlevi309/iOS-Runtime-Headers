/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKRemoveFromPlayHistoryRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _deleteID;

}

@property (nonatomic,copy,readonly) NSString * deleteID;              //@synthesize deleteID=_deleteID - In the implementation block
-(NSString *)deleteID;
-(id)initWithDeleteID:(id)arg1 caller:(id)arg2 isContinueWatching:(BOOL)arg3 ;
@end

