/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSDictionary, NSDate;

@interface ASDClipRestrictionsTask : NSObject {

	long long _responseCode;
	NSDictionary* _dictionary;
	NSDate* _verificationDate;

}

@property (nonatomic,copy) NSDictionary * dictionary;               //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy) NSDate * verificationDate;               //@synthesize verificationDate=_verificationDate - In the implementation block
@property (readonly) BOOL hasErrorStatus; 
@property (nonatomic,readonly) long long responseCode;              //@synthesize responseCode=_responseCode - In the implementation block
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 verificationDate:(id)arg2 ;
-(void)_verifyRequest;
-(NSDate *)verificationDate;
-(id)initWithClipRequest:(id)arg1 ;
-(id)initWithClipRequest:(id)arg1 verificationDate:(id)arg2 ;
-(void)setVerificationDate:(NSDate *)arg1 ;
-(BOOL)hasErrorStatus;
-(BOOL)hasResponseFlag:(long long)arg1 ;
-(long long)responseCode;
@end

