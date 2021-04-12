/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObjectNSSecureCodingNSCopying;
@class EFStringHash, NSData, NSString;

@interface EMObjectID : NSObject <EFLoggable, EFCacheable, NSSecureCoding, NSCopying> {

	unsigned long long _hash;
	os_unfair_lock_s _lock;
	BOOL _ephemeral;
	id<NSObject><NSSecureCoding><NSCopying> _representedObjectID;
	EFStringHash* _stringHash;

}

@property (nonatomic,copy,readonly) id<NSObject><NSSecureCoding><NSCopying> representedObjectID;              //@synthesize representedObjectID=_representedObjectID - In the implementation block
@property (getter=isEphemeral,readonly) BOOL ephemeral;                                                       //@synthesize ephemeral=_ephemeral - In the implementation block
@property (readonly) EFStringHash * stringHash;                                                               //@synthesize stringHash=_stringHash - In the implementation block
@property (nonatomic,copy,readonly) NSData * serializedRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)objectIDFromSerializedRepresentation:(id)arg1 ;
+(id)_decodableClasses;
+(void)addDecodableClass:(Class)arg1 ;
-(NSData *)serializedRepresentation;
-(EFStringHash *)stringHash;
-(id)initAsEphemeralID:(BOOL)arg1 representedObjectID:(id)arg2 ;
-(void)_commonInitAsEphemeralID:(BOOL)arg1 representedObjectID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEphemeral;
-(id)cachedSelf;
-(id<NSObject><NSSecureCoding><NSCopying>)representedObjectID;
-(id)initWithRepresentedObjectID:(id)arg1 ;
-(NSString *)description;
-(id)initAsEphemeralID:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

