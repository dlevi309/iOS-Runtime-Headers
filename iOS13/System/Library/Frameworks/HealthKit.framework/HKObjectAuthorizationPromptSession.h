/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray;

@interface HKObjectAuthorizationPromptSession : NSObject <NSSecureCoding> {

	NSUUID* _sessionIdentifier;
	NSString* _bundleIdentifier;
	NSArray* _samplesRequiringAuthorization;

}

@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * samplesRequiringAuthorization;              //@synthesize samplesRequiringAuthorization=_samplesRequiringAuthorization - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSUUID *)sessionIdentifier;
-(id)initForBundleIdentifier:(id)arg1 samples:(id)arg2 sessionIdentifier:(id)arg3 ;
-(NSArray *)samplesRequiringAuthorization;
@end

