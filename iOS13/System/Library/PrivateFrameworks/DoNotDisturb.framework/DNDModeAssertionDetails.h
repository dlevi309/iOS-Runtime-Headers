/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(DNDModeAssertionLifetime *)lifetime;
-(NSString *)modeIdentifier;
-(BOOL)isUserRequested;
-(id)_initWithDetails:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 userVisibleEndDate:(id)arg4 ;
-(NSDate *)userVisibleEndDate;
@end

