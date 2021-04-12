/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSUUID *)studyUUID;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSUUID *)subjectUUID;
-(NSString *)payloadType;
-(void)setPayloadType:(NSString *)arg1 ;
-(id)initWithChannel:(id)arg1 payloadType:(id)arg2 certificate:(SecCertificateRef)arg3 ;
-(NSString *)payloadIdentifier;
-(id)initWithSubjectUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 certificate:(SecCertificateRef)arg5 ;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(BOOL)disableCompression;
-(void)setDisableCompression:(BOOL)arg1 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(NSString *)channel;
-(SecCertificateRef)certificate;
-(NSData *)applicationData;
-(NSDictionary *)keyValuePairs;
-(void)setKeyValuePairs:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

