/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying> {

	unsigned long long _hashType;

}

@property (assign,nonatomic) unsigned long long hashType;              //@synthesize hashType=_hashType - In the implementation block
-(long long)compare:(id)arg1 ;
-(unsigned long long)hashType;
-(id)initWithHashType:(unsigned long long)arg1 ;
-(id)description;
-(void)setHashType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

