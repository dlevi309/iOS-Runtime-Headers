/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DNDModeAssertionLifetime, NSDate;

@interface DNDModeAssertionDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _modeIdentifier;
	DNDModeAssertionLifetime* _lifetime;
	NSDate* _userVisibleEndDate;

}

@property (getter=isUserRequested,nonatomic,readonly) BOOL userRequested; 
@property (nonatomic,copy,readonly) NSDate * userVisibleEndDate;                       //@synthesize userVisibleEndDate=_userVisibleEndDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * modeIdentifier;                         //@synthesize modeIdentifier=_modeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionLifetime * lifetime;               //@synthesize lifetime=_lifetime - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)detailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 ;
+(id)userRequestedAssertionDetailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 ;
-(id)init;
-(DNDModeAssertionLifetime *)lifetime;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isUserRequested;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)modeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithDetails:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 userVisibleEndDate:(id)arg4 ;
-(NSDate *)userVisibleEndDate;
@end

