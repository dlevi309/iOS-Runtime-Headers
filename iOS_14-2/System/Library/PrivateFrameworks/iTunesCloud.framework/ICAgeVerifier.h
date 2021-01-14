/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface ICAgeVerifier : NSObject <NSCopying> {

	long long _status;
	NSDate* _verificationExpirationDate;

}

@property (assign,nonatomic) long long status;                                                           //@synthesize status=_status - In the implementation block
@property (getter=isExplicitContentAllowed,nonatomic,readonly) BOOL explicitContentAllowed; 
@property (nonatomic,readonly) NSDate * verificationExpirationDate;                                      //@synthesize verificationExpirationDate=_verificationExpirationDate - In the implementation block
-(id)initWithExpirationDate:(id)arg1 ;
-(BOOL)isExplicitContentAllowed;
-(NSDate *)verificationExpirationDate;
-(void)runAgeVerification;
-(id)description;
-(void)setStatus:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end

