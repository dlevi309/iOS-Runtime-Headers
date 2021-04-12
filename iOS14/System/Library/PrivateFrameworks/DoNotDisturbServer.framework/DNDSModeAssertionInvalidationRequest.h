/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModernAssertionSourceResolution.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, DNDSModeAssertionInvalidationPredicate, NSDate, DNDModeAssertionInvalidationDetails, DNDModeAssertionSource, NSString;

@interface DNDSModeAssertionInvalidationRequest : NSObject <DNDSModernAssertionSourceResolution, NSCopying> {

	NSUUID* _UUID;
	DNDSModeAssertionInvalidationPredicate* _predicate;
	NSDate* _requestDate;
	DNDModeAssertionInvalidationDetails* _details;
	DNDModeAssertionSource* _source;
	unsigned long long _reason;
	unsigned long long _reasonOverride;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * UUID;                                                   //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) DNDSModeAssertionInvalidationPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * requestDate;                                            //@synthesize requestDate=_requestDate - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionInvalidationDetails * details;                   //@synthesize details=_details - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionSource * source;                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long reason;                                            //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long reasonOverride;                                    //@synthesize reasonOverride=_reasonOverride - In the implementation block
+(id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 source:(id)arg3 reason:(unsigned long long)arg4 ;
+(id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(unsigned long long)arg5 reasonOverride:(unsigned long long)arg6 ;
-(NSUUID *)UUID;
-(DNDSModeAssertionInvalidationPredicate *)predicate;
-(NSString *)description;
-(unsigned long long)reason;
-(unsigned long long)hash;
-(DNDModeAssertionInvalidationDetails *)details;
-(NSDate *)requestDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(DNDModeAssertionSource *)source;
-(unsigned long long)reasonOverride;
-(id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3 ;
-(id)initWithUUID:(id)arg1 predicate:(id)arg2 requestDate:(id)arg3 details:(id)arg4 source:(id)arg5 reason:(unsigned long long)arg6 reasonOverride:(unsigned long long)arg7 ;
@end

