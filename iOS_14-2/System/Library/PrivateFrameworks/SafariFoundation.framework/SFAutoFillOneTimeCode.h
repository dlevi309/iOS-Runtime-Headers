/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/


@class NSString, NSDate, NSURL;

@interface SFAutoFillOneTimeCode : NSObject {

	NSString* _detectedCode;
	NSString* _machineReadableCode;
	NSString* _displayCode;
	NSString* _GUID;
	NSString* _handle;
	NSString* _domain;
	NSString* _embeddedDomain;
	NSDate* _timestamp;

}

@property (nonatomic,copy,readonly) NSURL * _domainBoundTopLevelURL; 
@property (nonatomic,copy,readonly) NSURL * _domainBoundEmbeddedURL; 
@property (nonatomic,copy,readonly) NSString * detectedCode;                      //@synthesize detectedCode=_detectedCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * machineReadableCode;               //@synthesize machineReadableCode=_machineReadableCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * code; 
@property (nonatomic,copy,readonly) NSString * displayCode;                       //@synthesize displayCode=_displayCode - In the implementation block
@property (getter=UID,nonatomic,copy,readonly) NSString * GUID;                   //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                            //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * domain;                            //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSString * embeddedDomain;                    //@synthesize embeddedDomain=_embeddedDomain - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
-(NSString *)handle;
-(NSDate *)timestamp;
-(NSString *)domain;
-(id)description;
-(unsigned long long)hash;
-(NSString *)code;
-(NSString *)GUID;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)_domainBoundTopLevelURL;
-(long long)_matchURL:(id)arg1 withBoundDomainURL:(id)arg2 ;
-(NSURL *)_domainBoundEmbeddedURL;
-(id)_secureURLForDomain:(id)arg1 ;
-(id)initWithIMCoreDictionary:(id)arg1 ;
-(long long)matchDomainWithURL:(id)arg1 ;
-(long long)matchBoundDomainsWithFrameURLs:(id)arg1 ;
-(NSString *)detectedCode;
-(NSString *)machineReadableCode;
-(NSString *)displayCode;
-(NSString *)embeddedDomain;
@end

