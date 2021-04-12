/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(NSString *)bundleVersion;
-(id)privacyFlow;
@end

