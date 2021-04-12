/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKSource *)source;
-(NSUUID *)sessionIdentifier;
-(NSSet *)typesRequiringReadAuthorization;
-(NSSet *)typesRequiringShareAuthorization;
-(id)initWithSource:(id)arg1 session:(id)arg2 readTypes:(id)arg3 writeTypes:(id)arg4 ;
@end

