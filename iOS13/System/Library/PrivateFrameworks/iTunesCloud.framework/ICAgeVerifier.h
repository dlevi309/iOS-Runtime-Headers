/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)initWithExpirationDate:(id)arg1 ;
-(NSDate *)verificationExpirationDate;
-(void)runAgeVerification;
-(BOOL)isExplicitContentAllowed;
@end

