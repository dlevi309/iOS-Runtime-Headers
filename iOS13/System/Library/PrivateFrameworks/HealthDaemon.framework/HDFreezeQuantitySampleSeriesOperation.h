/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)endDate;
-(NSDictionary *)metadata;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(NSUUID *)frozenIdentifier;
-(id)initWithIdentifier:(id)arg1 metadata:(id)arg2 endDate:(id)arg3 ;
-(long long)freezeResult;
@end

