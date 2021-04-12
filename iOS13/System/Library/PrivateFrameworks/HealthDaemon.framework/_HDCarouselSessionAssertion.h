/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDAssertion.h>

@class NSString;

@interface _HDCarouselSessionAssertion : HDAssertion {

	BOOL _supportsAOT;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsAOT;                                      //@synthesize supportsAOT=_supportsAOT - In the implementation block
-(NSString *)applicationBundleIdentifier;
-(id)initWithOwnerIdentifier:(id)arg1 ;
-(BOOL)supportsAOT;
-(void)setSupportsAOT:(BOOL)arg1 ;
@end

