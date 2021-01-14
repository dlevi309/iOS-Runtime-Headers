/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, CXHandle;

@interface CXAccount : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSString* _accountDescription;
	NSString* _shortLabel;
	CXHandle* _handle;
	NSString* _isoCountryCode;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSUUID * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountDescription;              //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortLabel;                      //@synthesize shortLabel=_shortLabel - In the implementation block
@property (nonatomic,readonly) CXHandle * handle;                               //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * isoCountryCode;                  //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                     //@synthesize serviceName=_serviceName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(NSString *)accountDescription;
-(id)archivedDataWithError:(id*)arg1 ;
-(NSUUID *)UUID;
-(CXHandle *)handle;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)isoCountryCode;
-(id)description;
-(NSString *)shortLabel;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5 ;
-(NSString *)serviceName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5 shortLabel:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

