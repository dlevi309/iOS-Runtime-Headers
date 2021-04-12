/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)contentID;
-(WLKCanonicalPlayablesResponse *)response;
-(void)processResponse;
-(id)initWithContentID:(id)arg1 profiles:(id)arg2 caller:(id)arg3 ;
@end

