/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface HMAccessoryAllowedHost : HMFObject <NSSecureCoding> {

	BOOL _unrestricted;
	NSString* _name;
	unsigned long long _purpose;
	NSSet* _addresses;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long purpose;                           //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSSet * addresses;                                    //@synthesize addresses=_addresses - In the implementation block
@property (getter=isUnrestricted,nonatomic,readonly) BOOL unrestricted;              //@synthesize unrestricted=_unrestricted - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)addresses;
-(unsigned long long)purpose;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isUnrestricted;
-(NSString *)name;
-(NSString *)address;
-(id)initWithCoder:(id)arg1 ;
@end

