/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, INPerson, NSNumber;

@interface INCallRecord : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSDate* _dateCreated;
	INPerson* _caller;
	long long _callRecordType;
	NSNumber* _callDuration;
	NSNumber* _unseen;
	long long _callCapability;
	NSNumber* _numberOfCalls;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateCreated;                  //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,copy,readonly) INPerson * caller;                     //@synthesize caller=_caller - In the implementation block
@property (nonatomic,readonly) long long callRecordType;                   //@synthesize callRecordType=_callRecordType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * callDuration;               //@synthesize callDuration=_callDuration - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * unseen;                     //@synthesize unseen=_unseen - In the implementation block
@property (nonatomic,readonly) long long callCapability;                   //@synthesize callCapability=_callCapability - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfCalls;              //@synthesize numberOfCalls=_numberOfCalls - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)callCapability;
-(id)_dictionaryRepresentation;
-(NSNumber *)callDuration;
-(NSDate *)dateCreated;
-(INPerson *)caller;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSNumber *)unseen;
-(id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(long long)arg4 callCapability:(long long)arg5 callDuration:(id)arg6 unseen:(id)arg7 numberOfCalls:(id)arg8 ;
-(id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(long long)arg4 callCapability:(long long)arg5 callDuration:(id)arg6 unseen:(id)arg7 ;
-(long long)callRecordType;
-(NSNumber *)numberOfCalls;
@end

