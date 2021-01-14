/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKSecureElementApplet : NSObject <NSSecureCoding> {

	BOOL _locked;
	BOOL _containsSubKeys;
	NSString* _identifier;
	NSString* _packageIdentifier;
	unsigned long long _lifecycleState;

}

@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * packageIdentifier;                   //@synthesize packageIdentifier=_packageIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long lifecycleState;              //@synthesize lifecycleState=_lifecycleState - In the implementation block
@property (getter=isLocked,nonatomic,readonly) BOOL locked;                    //@synthesize locked=_locked - In the implementation block
@property (nonatomic,readonly) BOOL containsSubKeys;                           //@synthesize containsSubKeys=_containsSubKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureElementAppletWithInternalApplet:(id)arg1 ;
-(BOOL)isLocked;
-(unsigned long long)lifecycleState;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)packageIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 packageIdentifier:(id)arg2 lifecycleState:(unsigned long long)arg3 locked:(BOOL)arg4 containsSubKeys:(BOOL)arg5 ;
-(id)initWithIdentifier:(id)arg1 packageIdentifier:(id)arg2 lifecycleState:(unsigned long long)arg3 ;
-(id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2 ;
-(BOOL)containsSubKeys;
@end

