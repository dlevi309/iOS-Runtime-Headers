/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)supportsAOT;
-(id)initWithOwnerIdentifier:(id)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(void)setSupportsAOT:(BOOL)arg1 ;
@end

