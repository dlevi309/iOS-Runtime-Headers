/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAccessControl.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableSet, NSArray;

@interface HMMediaContentProfileAccessControl : HMAccessControl <NSCopying, NSMutableCopying> {

	NSMutableSet* _internalAccessories;

}

@property (copy,readonly) NSArray * accessories; 
+(id)shortDescription;
+(BOOL)isAccessorySupported:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(id)shortDescription;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSArray *)accessories;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithUser:(id)arg1 accessories:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

