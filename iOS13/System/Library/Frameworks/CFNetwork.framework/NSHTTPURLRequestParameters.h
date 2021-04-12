/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSString, NSMutableDictionary, NSArray, NSData;

@interface NSHTTPURLRequestParameters : NSObject {

	NSString* method;
	NSMutableDictionary* fields;
	NSArray* extraCookies;
	NSData* data;
	unsigned long long pageNotFoundCacheLifetime;
	BOOL shouldHandleCookies;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;

}
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
@end

