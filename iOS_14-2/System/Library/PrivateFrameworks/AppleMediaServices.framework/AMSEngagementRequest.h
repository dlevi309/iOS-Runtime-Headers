/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACAccount, NSDictionary, NSString, NSURL;

@interface AMSEngagementRequest : NSObject <NSSecureCoding> {

	BOOL _failOnDismiss;
	ACAccount* _account;
	NSDictionary* _clientData;
	NSString* _logKey;
	NSDictionary* _metricsOverlay;
	NSURL* _URL;

}

@property (nonatomic,retain) ACAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * clientData;                  //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,retain) NSString * logKey;                          //@synthesize logKey=_logKey - In the implementation block
@property (assign,nonatomic) BOOL failOnDismiss;                         //@synthesize failOnDismiss=_failOnDismiss - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsOverlay;              //@synthesize metricsOverlay=_metricsOverlay - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(BOOL)failOnDismiss;
-(NSDictionary *)metricsOverlay;
-(void)setFailOnDismiss:(BOOL)arg1 ;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setClientData:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)clientData;
-(NSString *)logKey;
@end

