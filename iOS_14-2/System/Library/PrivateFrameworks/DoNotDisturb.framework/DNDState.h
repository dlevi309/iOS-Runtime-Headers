/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate;

@interface DNDState : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _activeModeAssertionMetadata;
	unsigned long long _suppressionState;
	NSDate* _userVisibleTransitionDate;
	unsigned long long _userVisibleTransitionLifetimeType;

}

@property (nonatomic,readonly) BOOL willSuppressInterruptions; 
@property (nonatomic,copy,readonly) NSArray * activeModeAssertionMetadata; 
@property (nonatomic,readonly) unsigned long long suppressionState;                               //@synthesize suppressionState=_suppressionState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeModeIdentifiers; 
@property (nonatomic,copy,readonly) NSDate * userVisibleTransitionDate;                           //@synthesize userVisibleTransitionDate=_userVisibleTransitionDate - In the implementation block
@property (nonatomic,readonly) unsigned long long userVisibleTransitionLifetimeType;              //@synthesize userVisibleTransitionLifetimeType=_userVisibleTransitionLifetimeType - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(BOOL)supportsSecureCoding;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)suppressionState;
-(NSArray *)activeModeAssertionMetadata;
-(NSDate *)userVisibleTransitionDate;
-(unsigned long long)userVisibleTransitionLifetimeType;
-(id)initWithSuppressionState:(unsigned long long)arg1 activeModeAssertionMetadata:(id)arg2 userVisibleTransitionDate:(id)arg3 userVisibleTransitionLifetimeType:(unsigned long long)arg4 ;
-(NSArray *)activeModeIdentifiers;
-(BOOL)willSuppressInterruptions;
@end

