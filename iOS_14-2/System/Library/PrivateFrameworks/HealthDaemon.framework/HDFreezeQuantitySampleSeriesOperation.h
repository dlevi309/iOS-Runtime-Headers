/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalableOperation.h>

@class NSUUID, NSDictionary, NSDate;

@interface HDFreezeQuantitySampleSeriesOperation : HDJournalableOperation {

	NSUUID* _identifier;
	NSDictionary* _metadata;
	NSDate* _endDate;
	NSUUID* _frozenIdentifier;
	long long _freezeResult;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                       //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * frozenIdentifier;              //@synthesize frozenIdentifier=_frozenIdentifier - In the implementation block
@property (nonatomic,readonly) long long freezeResult;                      //@synthesize freezeResult=_freezeResult - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDictionary *)metadata;
-(NSUUID *)frozenIdentifier;
-(id)initWithIdentifier:(id)arg1 metadata:(id)arg2 endDate:(id)arg3 ;
-(long long)freezeResult;
@end

