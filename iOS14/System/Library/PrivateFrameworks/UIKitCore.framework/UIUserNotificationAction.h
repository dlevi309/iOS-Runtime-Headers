/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface UIUserNotificationAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _authenticationRequired;
	BOOL _destructive;
	NSString* _activationModeString;
	NSString* _behaviorString;
	NSString* _identifier;
	NSString* _title;
	unsigned long long _behavior;
	NSDictionary* _parameters;
	unsigned long long _activationMode;

}

@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;                                              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                                                  //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) unsigned long long activationMode;                                        //@synthesize activationMode=_activationMode - In the implementation block
@property (assign,getter=isAuthenticationRequired,nonatomic) BOOL authenticationRequired;              //@synthesize authenticationRequired=_authenticationRequired - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;                                    //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,readonly) NSString * activationModeString;                                        //@synthesize activationModeString=_activationModeString - In the implementation block
@property (nonatomic,readonly) NSString * behaviorString;                                              //@synthesize behaviorString=_behaviorString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(unsigned long long)activationMode;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 behavior:(unsigned long long)arg3 parameters:(id)arg4 activationMode:(unsigned long long)arg5 isAuthenticationRequired:(BOOL)arg6 isDestructive:(BOOL)arg7 ;
-(BOOL)isDestructive;
-(void)setBehavior:(unsigned long long)arg1 ;
-(id)init;
-(id)validatedAction;
-(unsigned long long)behavior;
-(NSString *)behaviorString;
-(NSString *)activationModeString;
-(BOOL)isAuthenticationRequired;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAuthenticationRequired:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setDestructive:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

