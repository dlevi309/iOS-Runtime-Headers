/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying> {

	unsigned long long _hashType;

}

@property (assign,nonatomic) unsigned long long hashType;              //@synthesize hashType=_hashType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setHashType:(unsigned long long)arg1 ;
-(unsigned long long)hashType;
-(id)initWithHashType:(unsigned long long)arg1 ;
@end

