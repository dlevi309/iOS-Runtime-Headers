/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PRChipInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _prodMode;
	unsigned char _secureMode;
	unsigned char _securityDomain;
	unsigned short _chipID;
	unsigned short _boardID;
	unsigned _bootMode;
	unsigned long long _ECID;

}

@property (nonatomic,readonly) unsigned long long ECID;                   //@synthesize ECID=_ECID - In the implementation block
@property (nonatomic,readonly) unsigned short chipID;                     //@synthesize chipID=_chipID - In the implementation block
@property (nonatomic,readonly) unsigned short boardID;                    //@synthesize boardID=_boardID - In the implementation block
@property (nonatomic,readonly) unsigned bootMode;                         //@synthesize bootMode=_bootMode - In the implementation block
@property (nonatomic,readonly) unsigned char prodMode;                    //@synthesize prodMode=_prodMode - In the implementation block
@property (nonatomic,readonly) unsigned char secureMode;                  //@synthesize secureMode=_secureMode - In the implementation block
@property (nonatomic,readonly) unsigned char securityDomain;              //@synthesize securityDomain=_securityDomain - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithECID:(unsigned long long)arg1 chipID:(unsigned short)arg2 boardID:(unsigned short)arg3 bootMode:(unsigned)arg4 prodMode:(unsigned char)arg5 secureMode:(unsigned char)arg6 securityDomain:(unsigned char)arg7 ;
-(unsigned long long)ECID;
-(unsigned short)chipID;
-(unsigned short)boardID;
-(unsigned)bootMode;
-(unsigned char)prodMode;
-(unsigned char)secureMode;
-(unsigned char)securityDomain;
@end

