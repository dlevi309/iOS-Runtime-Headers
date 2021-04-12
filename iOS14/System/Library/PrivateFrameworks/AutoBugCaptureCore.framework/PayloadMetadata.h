/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@class NSString, NSMutableArray, NSDate;

@interface PayloadMetadata : NSObject {

	BOOL _requiresUserConsent;
	short _payloadPreflightStatus;
	NSString* _token;
	long long _radarID;
	long long _urgency;
	unsigned long long _apnsIdentifier;
	unsigned long long _userConsentState;
	NSString* _caseID;
	double _caseTimestamp;
	NSMutableArray* _attachmentFileInfos;
	NSDate* _receivedTime;

}

@property (nonatomic,copy) NSString * token;                                      //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) long long radarID;                                   //@synthesize radarID=_radarID - In the implementation block
@property (assign,nonatomic) long long urgency;                                   //@synthesize urgency=_urgency - In the implementation block
@property (assign,nonatomic) unsigned long long apnsIdentifier;                   //@synthesize apnsIdentifier=_apnsIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL requiresUserConsent;                          //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
@property (nonatomic,readonly) unsigned long long userConsentState;               //@synthesize userConsentState=_userConsentState - In the implementation block
@property (nonatomic,readonly) NSString * caseID;                                 //@synthesize caseID=_caseID - In the implementation block
@property (nonatomic,readonly) double caseTimestamp;                              //@synthesize caseTimestamp=_caseTimestamp - In the implementation block
@property (nonatomic,readonly) NSMutableArray * attachmentFileInfos;              //@synthesize attachmentFileInfos=_attachmentFileInfos - In the implementation block
@property (nonatomic,retain) NSDate * receivedTime;                               //@synthesize receivedTime=_receivedTime - In the implementation block
@property (assign,nonatomic) short payloadPreflightStatus;                        //@synthesize payloadPreflightStatus=_payloadPreflightStatus - In the implementation block
+(void)initialize;
+(BOOL)uploadRequiresConsent:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(long long)urgency;
-(NSString *)caseID;
-(void)setToken:(NSString *)arg1 ;
-(void)setUrgency:(long long)arg1 ;
-(long long)radarID;
-(NSString *)token;
-(void)setReceivedTime:(NSDate *)arg1 ;
-(NSDate *)receivedTime;
-(BOOL)requiresUserConsent;
-(void)setPayloadPreflightStatus:(short)arg1 ;
-(id)initWithCaseIdentifier:(id)arg1 ;
-(BOOL)validateAttachmentFiles;
-(void)requestUserConsent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setRadarID:(long long)arg1 ;
-(unsigned long long)apnsIdentifier;
-(void)setApnsIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)userConsentState;
-(double)caseTimestamp;
-(NSMutableArray *)attachmentFileInfos;
-(short)payloadPreflightStatus;
@end

