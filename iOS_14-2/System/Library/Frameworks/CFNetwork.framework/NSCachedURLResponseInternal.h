/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponseInternal : NSObject {

	NSURLResponse* response;
	NSData* data;
	NSDictionary* userInfo;
	unsigned long long storagePolicy;
	CFCachedURLResponse* _cachedURLResponse;

}
-(void)dealloc;
@end

