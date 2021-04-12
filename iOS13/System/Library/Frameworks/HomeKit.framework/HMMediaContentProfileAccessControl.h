/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(id)shortDescription;
-(NSArray *)accessories;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithUser:(id)arg1 accessories:(id)arg2 ;
@end

