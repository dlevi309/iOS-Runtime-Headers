/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAuthenticated;
-(void)setWireType:(unsigned long long)arg1 ;
-(void)setIs256Bit:(BOOL)arg1 ;
-(unsigned long long)wireType;
-(BOOL)is256Bit;
-(id)initWithEncryptionWireType:(unsigned long long)arg1 is256Bit:(BOOL)arg2 ;
-(BOOL)isGCM;
-(id)initWithEncryptionType:(unsigned long long)arg1 ;
-(unsigned)keyLength;
-(unsigned)blockLength;
-(unsigned)ccAlgorithm;
-(unsigned)ivLength;
-(unsigned)icvLength;
@end

