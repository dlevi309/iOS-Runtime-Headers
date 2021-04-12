/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObjectNSSecureCodingNSCopying;
@class EFStringHash, NSString;

@interface EMObjectID : NSObject <EFCacheable, NSSecureCoding, NSCopying> {

	unsigned long long _hash;
	os_unfair_lock_s _lock;
	BOOL _ephemeral;
	id<NSObject><NSSecureCoding><NSCopying> _representedObjectID;
	EFStringHash* _stringHash;

}

@property (nonatomic,copy,readonly) id<NSObject><NSSecureCoding><NSCopying> representedObjectID;              //@synthesize representedObjectID=_representedObjectID - In the implementation block
@property (getter=isEphemeral,readonly) BOOL ephemeral;                                                       //@synthesize ephemeral=_ephemeral - In the implementation block
@property (readonly) EFStringHash * stringHash;                                                               //@synthesize stringHash=_stringHash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_decodableClasses;
+(void)addDecodableClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEphemeral;
-(id)initWithRepresentedObjectID:(id)arg1 ;
-(id)cachedSelf;
-(EFStringHash *)stringHash;
-(id)initAsEphemeralID:(BOOL)arg1 ;
-(id<NSObject><NSSecureCoding><NSCopying>)representedObjectID;
-(id)initAsEphemeralID:(BOOL)arg1 representedObjectID:(id)arg2 ;
-(void)_commonInitAsEphemeralID:(BOOL)arg1 representedObjectID:(id)arg2 ;
@end

