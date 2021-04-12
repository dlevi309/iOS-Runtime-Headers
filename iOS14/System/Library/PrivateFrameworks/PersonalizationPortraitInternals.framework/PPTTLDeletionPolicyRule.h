/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString, NSNumber;

@interface PPTTLDeletionPolicyRule : NSObject {

	NSString* _bundleIdentifier;
	NSString* _groupIdentifier;
	NSNumber* _maxAgeSeconds;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * maxAgeSeconds;                 //@synthesize maxAgeSeconds=_maxAgeSeconds - In the implementation block
-(NSString *)groupIdentifier;
-(NSString *)bundleIdentifier;
-(id)description;
-(NSNumber *)maxAgeSeconds;
-(id)initWithBundleIdentifier:(id)arg1 groupIdentifier:(id)arg2 maxAgeSeconds:(id)arg3 ;
@end

