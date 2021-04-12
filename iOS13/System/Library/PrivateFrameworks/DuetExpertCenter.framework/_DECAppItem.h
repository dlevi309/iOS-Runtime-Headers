/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <DuetExpertCenter/_DECItem.h>

@class NSString;

@interface _DECAppItem : _DECItem {

	NSString* _bundleIdentifier;
	long long _sources;
	long long _reason;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long sources;                        //@synthesize sources=_sources - In the implementation block
@property (assign,nonatomic) long long reason;                           //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)category;
+(id)appWithBundleIdentifier:(id)arg1 sources:(long long)arg2 ;
+(id)appWithBundleIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reason;
-(NSString *)bundleIdentifier;
-(long long)sources;
-(void)setReason:(long long)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 sources:(long long)arg2 ;
-(BOOL)_isEqualToDECAppItem:(id)arg1 ;
@end

