/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ASDBetaAppVersion;

@interface ASDBetaAppFeedbackMetadata : NSObject <NSSecureCoding> {

	NSString* _incidentID;
	NSString* _email;
	ASDBetaAppVersion* _version;

}

@property (copy) NSString * incidentID;                    //@synthesize incidentID=_incidentID - In the implementation block
@property (copy) NSString * email;                         //@synthesize email=_email - In the implementation block
@property (copy) ASDBetaAppVersion * version;              //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEmail:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)incidentID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(ASDBetaAppVersion *)arg1 ;
-(NSString *)email;
-(void)setIncidentID:(NSString *)arg1 ;
-(ASDBetaAppVersion *)version;
-(BOOL)isEqual:(id)arg1 ;
@end

