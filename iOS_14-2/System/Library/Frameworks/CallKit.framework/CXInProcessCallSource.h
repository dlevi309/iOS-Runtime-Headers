/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallSource.h>

@class NSString, NSURL, CXInProcessProvider;

@interface CXInProcessCallSource : CXCallSource {

	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSString* _localizedName;
	CXInProcessProvider* _provider;

}

@property (nonatomic,retain) CXInProcessProvider * provider;              //@synthesize provider=_provider - In the implementation block
-(id)localizedName;
-(id)bundleURL;
-(void)setProvider:(CXInProcessProvider *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(int)processIdentifier;
-(CXInProcessProvider *)provider;
-(BOOL)isPermittedToUsePublicAPI;
-(BOOL)isPermittedToUsePrivateAPI;
-(id)bundleIdentifier;
-(SCD_Struct_CX1)auditToken;
-(id)vendorProtocolDelegate;
-(id)identifier;
@end

