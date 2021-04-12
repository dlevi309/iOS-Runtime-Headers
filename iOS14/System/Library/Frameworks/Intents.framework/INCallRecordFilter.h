/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface INCallRecordFilter : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	NSArray* _participants;
	unsigned long long _callTypes;
	long long _callCapability;
	long long _preferredCallProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long preferredCallProvider;              //@synthesize preferredCallProvider=_preferredCallProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * participants;                  //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) unsigned long long callTypes;                 //@synthesize callTypes=_callTypes - In the implementation block
@property (nonatomic,readonly) long long callCapability;                     //@synthesize callCapability=_callCapability - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithParticipants:(id)arg1 callTypes:(unsigned long long)arg2 callCapability:(long long)arg3 ;
-(id)initWithParticipants:(id)arg1 callTypes:(unsigned long long)arg2 callCapability:(long long)arg3 preferredCallProvider:(long long)arg4 ;
-(NSArray *)participants;
-(NSString *)description;
-(long long)callCapability;
-(unsigned long long)hash;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)preferredCallProvider;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(unsigned long long)callTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

