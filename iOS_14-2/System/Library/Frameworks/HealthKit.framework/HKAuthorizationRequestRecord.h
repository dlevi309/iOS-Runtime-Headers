/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKSource, NSUUID, NSSet;

@interface HKAuthorizationRequestRecord : NSObject <NSSecureCoding> {

	HKSource* _source;
	NSUUID* _sessionIdentifier;
	NSSet* _typesRequiringShareAuthorization;
	NSSet* _typesRequiringReadAuthorization;

}

@property (nonatomic,copy,readonly) HKSource * source;                                     //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier;                            //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesRequiringShareAuthorization;              //@synthesize typesRequiringShareAuthorization=_typesRequiringShareAuthorization - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesRequiringReadAuthorization;               //@synthesize typesRequiringReadAuthorization=_typesRequiringReadAuthorization - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSource:(id)arg1 session:(id)arg2 readTypes:(id)arg3 writeTypes:(id)arg4 ;
-(NSUUID *)sessionIdentifier;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)typesRequiringReadAuthorization;
-(NSSet *)typesRequiringShareAuthorization;
-(HKSource *)source;
@end

