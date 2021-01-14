/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {

	BOOL _is256Bit;
	unsigned long long _wireType;

}

@property (readonly) unsigned keyLength; 
@property (readonly) unsigned blockLength; 
@property (readonly) unsigned ivLength; 
@property (readonly) unsigned icvLength; 
@property (assign) unsigned long long wireType;              //@synthesize wireType=_wireType - In the implementation block
@property (readonly) BOOL isAuthenticated; 
@property (readonly) BOOL isGCM; 
@property (assign) BOOL is256Bit;                            //@synthesize is256Bit=_is256Bit - In the implementation block
-(BOOL)isAuthenticated;
-(void)setWireType:(unsigned long long)arg1 ;
-(void)setIs256Bit:(BOOL)arg1 ;
-(id)initWithEncryptionWireType:(unsigned long long)arg1 is256Bit:(BOOL)arg2 ;
-(id)initWithEncryptionType:(unsigned long long)arg1 ;
-(BOOL)isGCM;
-(unsigned)ivLength;
-(unsigned)icvLength;
-(unsigned)keyLength;
-(unsigned)blockLength;
-(unsigned)ccAlgorithm;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)wireType;
-(BOOL)is256Bit;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

