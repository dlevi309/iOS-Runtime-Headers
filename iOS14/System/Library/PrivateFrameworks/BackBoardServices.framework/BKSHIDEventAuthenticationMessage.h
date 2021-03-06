/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>

@class NSData, NSString;

@interface BKSHIDEventAuthenticationMessage : NSObject <NSSecureCoding, NSCopying, BSProtobufSerializable> {

	long long _versionedPID;
	unsigned _eventType;
	unsigned long long _timestamp;
	long long _keyGeneration;
	unsigned long long _originIdentifier;
	unsigned long long _context;
	NSData* _signature;

}

@property (nonatomic,readonly) long long versionedPID;                           //@synthesize versionedPID=_versionedPID - In the implementation block
@property (nonatomic,readonly) unsigned eventType;                               //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long keyGeneration;                          //@synthesize keyGeneration=_keyGeneration - In the implementation block
@property (nonatomic,readonly) unsigned long long originIdentifier;              //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long context;                       //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)withKey:(id)arg1 buildMessage:(/*^block*/id)arg2 ;
+(id)messageWithOriginIdentifier:(unsigned long long)arg1 context:(unsigned long long)arg2 destinationAuditToken:(id)arg3 signWithKey:(id)arg4 ;
-(unsigned)eventType;
-(id)init;
-(unsigned long long)originIdentifier;
-(unsigned long long)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)context;
-(long long)versionedPID;
-(id)initForProtobufDecoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)destinationAuditToken;
-(long long)keyGeneration;
-(id)initWithOriginIdentifier:(unsigned long long)arg1 context:(unsigned long long)arg2 destinationAuditToken:(id)arg3 signWithKey:(id)arg4 ;
-(BOOL)_verifySignatureWithKey:(id)arg1 ;
-(BOOL)verifySignatureWithKeys:(id)arg1 ;
-(BOOL)verifySignatureWithKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

