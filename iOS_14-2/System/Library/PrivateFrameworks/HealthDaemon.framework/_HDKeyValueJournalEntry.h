/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@protocol NSSecureCoding;
@class NSString, NSDate;

@interface _HDKeyValueJournalEntry : HDJournalEntry {

	id<NSSecureCoding> _value;
	NSString* _key;
	NSString* _domain;
	long long _category;
	long long _provenance;
	NSDate* _modificationDate;
	long long _updatePolicy;

}

@property (nonatomic,readonly) id<NSSecureCoding> value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) long long category;                     //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) long long provenance;                   //@synthesize provenance=_provenance - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) long long updatePolicy;                 //@synthesize updatePolicy=_updatePolicy - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(NSDate *)modificationDate;
-(long long)provenance;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)category;
-(NSString *)domain;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(id<NSSecureCoding>)value;
-(id)initWithValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 updatePolicy:(long long)arg6 modificationDate:(id)arg7 ;
-(long long)updatePolicy;
@end

