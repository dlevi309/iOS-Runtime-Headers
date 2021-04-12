/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSDictionary;

@interface BLTPBFileURLMetaData : NSObject {

	NSDictionary* _metadata;
	long long _sequenceNumberError;
	unsigned long long _sessionState;
	NSDictionary* _extraMetadata;

}

@property (nonatomic,readonly) NSDictionary * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) long long sequenceNumberError;                //@synthesize sequenceNumberError=_sequenceNumberError - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionState;              //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) NSDictionary * extraMetadata;                 //@synthesize extraMetadata=_extraMetadata - In the implementation block
-(NSDictionary *)metadata;
-(unsigned long long)sessionState;
-(NSDictionary *)extraMetadata;
-(long long)sequenceNumberError;
-(id)initWithSequenceNumberManager:(id)arg1 extraMetadata:(id)arg2 ;
-(id)initWithMetadata:(id)arg1 sequenceNumberManager:(id)arg2 ;
@end

