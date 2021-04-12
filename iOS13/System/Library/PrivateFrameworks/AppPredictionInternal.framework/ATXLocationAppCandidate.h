/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSString;

@interface ATXLocationAppCandidate : NSObject {

	NSString* _bundleIdentifier;
	unsigned long long _eligibility;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long eligibility;              //@synthesize eligibility=_eligibility - In the implementation block
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)transportType;
-(unsigned long long)eligibility;
-(void)setEligibility:(unsigned long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 eligibility:(unsigned long long)arg2 ;
@end

