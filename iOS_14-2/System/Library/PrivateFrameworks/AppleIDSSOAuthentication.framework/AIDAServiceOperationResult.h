/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
*/

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSString;

@interface AIDAServiceOperationResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _success;
	NSError* _error;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL success;                 //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)success;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSuccess:(BOOL)arg1 error:(id)arg2 type:(id)arg3 ;
@end

