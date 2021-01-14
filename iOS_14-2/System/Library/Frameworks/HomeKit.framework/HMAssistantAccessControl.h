/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAccessControl.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSArray;

@interface HMAssistantAccessControl : HMAccessControl <NSSecureCoding, NSCopying, NSMutableCopying> {

	BOOL _enabled;
	unsigned long long _options;
	NSSet* _accessories;

}

@property (getter=isEnabled,readonly) BOOL enabled;                  //@synthesize enabled=_enabled - In the implementation block
@property (readonly) BOOL allowUnauthenticatedRequests; 
@property (copy,readonly) NSArray * accessories; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(BOOL)isAccessorySupported:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)debugDescription;
-(unsigned long long)options;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSArray *)accessories;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)allowUnauthenticatedRequests;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

