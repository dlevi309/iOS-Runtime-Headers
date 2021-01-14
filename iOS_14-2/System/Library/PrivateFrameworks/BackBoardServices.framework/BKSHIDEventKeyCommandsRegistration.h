/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSSet, NSString;

@interface BKSHIDEventKeyCommandsRegistration : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying> {

	BKSHIDEventDeferringEnvironment* _environment;
	BKSHIDEventDeferringToken* _token;
	NSSet* _keyCommands;

}

@property (nonatomic,copy,readonly) BKSHIDEventDeferringEnvironment * deferringEnvironment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringToken * deferringToken;                          //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSSet * keyCommands;                                                 //@synthesize keyCommands=_keyCommands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(id)_initWithEnvironment:(id)arg1 token:(id)arg2 keyCommands:(id)arg3 ;
-(NSSet *)keyCommands;
-(id)init;
-(BKSHIDEventDeferringToken *)deferringToken;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BKSHIDEventDeferringEnvironment *)deferringEnvironment;
-(BOOL)isEqual:(id)arg1 ;
@end

