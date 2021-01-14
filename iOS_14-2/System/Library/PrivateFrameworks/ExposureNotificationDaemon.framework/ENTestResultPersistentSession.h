/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@class NSString, NSDictionary, NSData, NSError;

@interface ENTestResultPersistentSession : NSObject {

	NSString* _certificate;
	NSDictionary* _fetchedMetadata;
	NSData* _HMACKey;
	NSString* _revisionToken;
	NSError* _verificationError;
	NSString* _verificationToken;

}

@property (nonatomic,copy) NSString * certificate;                      //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,copy) NSDictionary * fetchedMetadata;              //@synthesize fetchedMetadata=_fetchedMetadata - In the implementation block
@property (nonatomic,copy) NSData * HMACKey;                            //@synthesize HMACKey=_HMACKey - In the implementation block
@property (nonatomic,copy) NSString * revisionToken;                    //@synthesize revisionToken=_revisionToken - In the implementation block
@property (nonatomic,copy) NSError * verificationError;                 //@synthesize verificationError=_verificationError - In the implementation block
@property (nonatomic,copy) NSString * verificationToken;                //@synthesize verificationToken=_verificationToken - In the implementation block
-(void)setCertificate:(NSString *)arg1 ;
-(NSString *)certificate;
-(NSString *)verificationToken;
-(void)setVerificationToken:(NSString *)arg1 ;
-(NSData *)HMACKey;
-(void)setFetchedMetadata:(NSDictionary *)arg1 ;
-(NSError *)verificationError;
-(NSDictionary *)fetchedMetadata;
-(void)setVerificationError:(NSError *)arg1 ;
-(void)setHMACKey:(NSData *)arg1 ;
-(NSString *)revisionToken;
-(void)setRevisionToken:(NSString *)arg1 ;
@end

