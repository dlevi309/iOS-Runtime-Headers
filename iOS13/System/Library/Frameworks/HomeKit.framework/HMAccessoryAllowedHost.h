/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface HMAccessoryAllowedHost : HMFObject <NSSecureCoding> {

	NSString* _name;
	unsigned long long _purpose;
	NSSet* _addresses;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long purpose;              //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSSet * addresses;                       //@synthesize addresses=_addresses - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(unsigned long long)purpose;
-(NSSet *)addresses;
-(id)initWithName:(id)arg1 purpose:(unsigned long long)arg2 addresses:(id)arg3 ;
@end

