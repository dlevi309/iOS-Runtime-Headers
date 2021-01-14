/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableDictionary, NSArray, NSData;

@interface NSHTTPURLRequestParameters : NSObject <NSCoding> {

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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

