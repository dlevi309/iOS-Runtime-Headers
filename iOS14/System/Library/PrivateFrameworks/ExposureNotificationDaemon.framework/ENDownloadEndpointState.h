/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ENDownloadEndpoint, NSUUID, NSDate, NSString;

@interface ENDownloadEndpointState : NSObject <NSSecureCoding> {

	ENDownloadEndpoint* _endpoint;
	NSUUID* _identifier;
	NSDate* _lastFetchAttemptDate;
	NSDate* _lastSuccessfulFetchDate;
	NSString* _lastDownloadedFilePath;
	NSString* _shortIdentifier;

}

@property (nonatomic,retain) ENDownloadEndpoint * endpoint;                  //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * lastFetchAttemptDate;                    //@synthesize lastFetchAttemptDate=_lastFetchAttemptDate - In the implementation block
@property (nonatomic,copy) NSDate * lastSuccessfulFetchDate;                 //@synthesize lastSuccessfulFetchDate=_lastSuccessfulFetchDate - In the implementation block
@property (nonatomic,copy) NSString * lastDownloadedFilePath;                //@synthesize lastDownloadedFilePath=_lastDownloadedFilePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortIdentifier;              //@synthesize shortIdentifier=_shortIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)shortIdentifier;
-(id)initWithEndpoint:(id)arg1 ;
-(void)setEndpoint:(ENDownloadEndpoint *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(ENDownloadEndpoint *)endpoint;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)lastFetchAttemptDate;
-(void)setLastFetchAttemptDate:(NSDate *)arg1 ;
-(void)setLastDownloadedFilePath:(NSString *)arg1 ;
-(void)setLastSuccessfulFetchDate:(NSDate *)arg1 ;
-(NSString *)lastDownloadedFilePath;
-(NSDate *)lastSuccessfulFetchDate;
@end

