/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned short _chipRevision;
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
@property (nonatomic,readonly) unsigned short chipRevision;               //@synthesize chipRevision=_chipRevision - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)ECID;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned short)chipID;
-(id)description;
-(unsigned short)boardID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)bootMode;
-(unsigned char)prodMode;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithECID:(unsigned long long)arg1 chipID:(unsigned short)arg2 boardID:(unsigned short)arg3 bootMode:(unsigned)arg4 prodMode:(unsigned char)arg5 secureMode:(unsigned char)arg6 securityDomain:(unsigned char)arg7 chipRevision:(unsigned short)arg8 ;
-(unsigned char)secureMode;
-(unsigned char)securityDomain;
-(unsigned short)chipRevision;
@end

