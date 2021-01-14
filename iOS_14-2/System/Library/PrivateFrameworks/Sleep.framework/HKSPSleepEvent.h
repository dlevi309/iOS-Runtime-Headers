/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NAHashable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface HKSPSleepEvent : NSObject <BSDescriptionProviding, NAEquatable, NAHashable, NSCopying, NSSecureCoding> {

	BOOL _isUserVisible;
	NSString* _identifier;
	NSDate* _dueDate;
	unsigned long long _type;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) BOOL isUserVisible;                      //@synthesize isUserVisible=_isUserVisible - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * dueDate;                        //@synthesize dueDate=_dueDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 isUserVisible:(BOOL)arg3 ;
+(id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 expirationDate:(id)arg3 isUserVisible:(BOOL)arg4 ;
+(id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 ;
+(id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 type:(unsigned long long)arg3 isUserVisible:(BOOL)arg4 ;
+(id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 type:(unsigned long long)arg3 expirationDate:(id)arg4 isUserVisible:(BOOL)arg5 ;
+(id)standardEventIdentifiers;
+(id)sleepEventWithIdentifier:(id)arg1 dueDate:(id)arg2 type:(unsigned long long)arg3 ;
-(id)succinctDescription;
-(long long)compare:(id)arg1 ;
-(NSDate *)dueDate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSDate *)expirationDate;
-(BOOL)isUserVisible;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isExpired:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 dueDate:(id)arg2 type:(unsigned long long)arg3 expirationDate:(id)arg4 isUserVisible:(BOOL)arg5 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

