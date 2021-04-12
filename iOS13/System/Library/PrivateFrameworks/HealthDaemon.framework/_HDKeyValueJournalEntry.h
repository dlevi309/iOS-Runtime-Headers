/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)key;
-(NSString *)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)category;
-(id<NSSecureCoding>)value;
-(NSDate *)modificationDate;
-(long long)provenance;
-(id)initWithValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 updatePolicy:(long long)arg6 modificationDate:(id)arg7 ;
-(long long)updatePolicy;
@end

