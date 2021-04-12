/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface DMFPolicyRegistration : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSSet* _policyTypes;
	/*^block*/id _callback;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * policyTypes;                //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,copy) id callback;                                 //@synthesize callback=_callback - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 policyTypes:(id)arg2 callback:(/*^block*/id)arg3 ;
-(NSSet *)policyTypes;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

