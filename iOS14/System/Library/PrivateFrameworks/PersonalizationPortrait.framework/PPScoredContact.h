/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PPContact, NSArray;

@interface PPScoredContact : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _flags;
	PPContact* _contact;
	double _score;
	NSArray* _scoredPhoneNumbers;
	NSArray* _scoredEmailAddresses;
	NSArray* _scoredSocialProfiles;
	NSArray* _scoredPostalAddresses;

}

@property (nonatomic,readonly) PPContact * contact;                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) double score;                                 //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) unsigned char flags;                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSArray * scoredPhoneNumbers;                 //@synthesize scoredPhoneNumbers=_scoredPhoneNumbers - In the implementation block
@property (nonatomic,readonly) NSArray * scoredEmailAddresses;               //@synthesize scoredEmailAddresses=_scoredEmailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * scoredSocialProfiles;               //@synthesize scoredSocialProfiles=_scoredSocialProfiles - In the implementation block
@property (nonatomic,readonly) NSArray * scoredPostalAddresses;              //@synthesize scoredPostalAddresses=_scoredPostalAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)scoredContactWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7 ;
-(PPContact *)contact;
-(long long)compare:(id)arg1 ;
-(double)score;
-(unsigned char)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)scoredSocialProfiles;
-(id)description;
-(NSArray *)scoredPostalAddresses;
-(NSArray *)scoredPhoneNumbers;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)reverseCompare:(id)arg1 ;
-(BOOL)isEqualToScoredContact:(id)arg1 ;
-(NSArray *)scoredEmailAddresses;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
@end

