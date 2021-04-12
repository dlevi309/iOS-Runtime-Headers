/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CXCallSource.h>

@class NSString, NSURL, CXInProcessProvider;

@interface CXInProcessCallSource : CXCallSource {

	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	CXInProcessProvider* _provider;

}

@property (nonatomic,retain) CXInProcessProvider * provider;              //@synthesize provider=_provider - In the implementation block
-(id)identifier;
-(int)processIdentifier;
-(id)bundleIdentifier;
-(id)bundleURL;
-(void)setProvider:(CXInProcessProvider *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(CXInProcessProvider *)provider;
-(id)vendorProtocolDelegate;
-(BOOL)isPermittedToUsePublicAPI;
-(BOOL)isPermittedToUsePrivateAPI;
@end

