/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)sessionState;
-(NSDictionary *)metadata;
-(NSDictionary *)extraMetadata;
-(id)transportData;
-(long long)sequenceNumberError;
-(id)initWithSequenceNumberManager:(id)arg1 extraMetadata:(id)arg2 ;
-(id)initWithMetadata:(id)arg1 sequenceNumberManager:(id)arg2 ;
@end

