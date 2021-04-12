/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)timeout;
-(void)setTimeout:(NSNumber *)arg1 ;
-(BOOL)success;
-(void)setToken:(NSString *)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)isEqualToCTPNRRequestSentInfo:(id)arg1 ;
@end

