/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTPNRRequestSentInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _success;
	NSString* _token;
	NSNumber* _timeout;

}

@property (assign,nonatomic) BOOL success;                    //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSString * token;                //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSNumber * timeout;              //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqualToCTPNRRequestSentInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTimeout:(NSNumber *)arg1 ;
-(NSNumber *)timeout;
-(id)description;
-(void)setToken:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

