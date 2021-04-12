/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ASDBetaAppVersion *)version;
-(void)setVersion:(ASDBetaAppVersion *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)incidentID;
-(void)setIncidentID:(NSString *)arg1 ;
@end

