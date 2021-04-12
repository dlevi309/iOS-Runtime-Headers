/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKCanonicalPlayablesResponse;

@interface WLKCanonicalPlayablesRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _contentID;
	WLKCanonicalPlayablesResponse* _response;

}

@property (nonatomic,copy,readonly) NSString * contentID;                             //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) WLKCanonicalPlayablesResponse * response;              //@synthesize response=_response - In the implementation block
-(WLKCanonicalPlayablesResponse *)response;
-(NSString *)contentID;
-(void)processResponse;
-(id)initWithContentID:(id)arg1 profiles:(id)arg2 caller:(id)arg3 ;
@end

