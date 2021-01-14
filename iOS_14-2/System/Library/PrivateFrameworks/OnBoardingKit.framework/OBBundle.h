/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@class NSString, NSBundle;

@interface OBBundle : NSObject {

	NSString* _identifier;
	NSBundle* _bundle;
	NSString* _bundleVersion;

}

@property (nonatomic,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle;                     //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion;              //@synthesize bundleVersion=_bundleVersion - In the implementation block
+(id)bundleWithIdentifier:(id)arg1 ;
+(id)bundleAtPath:(id)arg1 ;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(NSString *)bundleVersion;
-(id)privacyFlow;
-(NSString *)identifier;
@end

