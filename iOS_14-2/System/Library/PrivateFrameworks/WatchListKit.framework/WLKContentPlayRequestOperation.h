/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _canonicalID;
	WLKContentPlayResponse* _response;

}

@property (nonatomic,retain) WLKContentPlayResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                  //@synthesize canonicalID=_canonicalID - In the implementation block
-(NSString *)canonicalID;
-(WLKContentPlayResponse *)response;
-(void)setResponse:(WLKContentPlayResponse *)arg1 ;
-(void)processResponse;
-(id)initWithCanonicalID:(id)arg1 caller:(id)arg2 ;
@end

