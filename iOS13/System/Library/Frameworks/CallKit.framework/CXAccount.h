/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CXHandle *)handle;
-(NSUUID *)UUID;
-(NSString *)serviceName;
-(NSString *)isoCountryCode;
-(NSString *)accountDescription;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5 ;
-(id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5 shortLabel:(id)arg6 ;
-(NSString *)shortLabel;
@end

