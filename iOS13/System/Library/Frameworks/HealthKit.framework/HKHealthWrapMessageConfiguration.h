/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSUUID, NSString, NSDate, NSData, NSDictionary;

@interface HKHealthWrapMessageConfiguration : NSObject {

	BOOL _disableCompression;
	NSUUID* _subjectUUID;
	NSUUID* _studyUUID;
	NSString* _channel;
	NSString* _payloadType;
	SecCertificateRef _certificate;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _payloadIdentifier;
	NSData* _applicationData;
	NSDictionary* _keyValuePairs;

}

@property (nonatomic,copy,readonly) NSUUID * subjectUUID;                  //@synthesize subjectUUID=_subjectUUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * studyUUID;                    //@synthesize studyUUID=_studyUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channel;                    //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSString * payloadType;                         //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,readonly) SecCertificateRef certificate;              //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * payloadIdentifier;                   //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,copy) NSData * applicationData;                       //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,copy) NSDictionary * keyValuePairs;                   //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
@property (assign,nonatomic) BOOL disableCompression;                      //@synthesize disableCompression=_disableCompression - In the implementation block
-(void)dealloc;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(SecCertificateRef)certificate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)channel;
-(NSData *)applicationData;
-(void)setApplicationData:(NSData *)arg1 ;
-(void)setPayloadType:(NSString *)arg1 ;
-(NSString *)payloadType;
-(id)initWithChannel:(id)arg1 payloadType:(id)arg2 certificate:(SecCertificateRef)arg3 ;
-(id)initWithSubjectUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 certificate:(SecCertificateRef)arg5 ;
-(NSUUID *)subjectUUID;
-(NSUUID *)studyUUID;
-(NSString *)payloadIdentifier;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(NSDictionary *)keyValuePairs;
-(void)setKeyValuePairs:(NSDictionary *)arg1 ;
-(BOOL)disableCompression;
-(void)setDisableCompression:(BOOL)arg1 ;
@end

