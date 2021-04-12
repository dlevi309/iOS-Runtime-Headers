/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(BOOL)isEnabled;
-(id)shortDescription;
-(NSArray *)accessories;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)allowUnauthenticatedRequests;
@end

