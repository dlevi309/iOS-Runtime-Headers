/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface CTDataConnectionStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _suspended;
	BOOL _publicNetAllowed;
	unsigned _wirelessTechnologyMask;
	int _state;
	int _ipFamily;
	int _contextType;
	NSNumber* _pdp;
	NSString* _interfaceName;
	NSString* _apnName;

}

@property (nonatomic,retain) NSNumber * pdp;                               //@synthesize pdp=_pdp - In the implementation block
@property (nonatomic,retain) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) NSString * apnName;                           //@synthesize apnName=_apnName - In the implementation block
@property (assign,nonatomic) unsigned wirelessTechnologyMask;              //@synthesize wirelessTechnologyMask=_wirelessTechnologyMask - In the implementation block
@property (assign,nonatomic) int state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int ipFamily;                                 //@synthesize ipFamily=_ipFamily - In the implementation block
@property (assign,nonatomic) BOOL suspended;                               //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) BOOL publicNetAllowed;                        //@synthesize publicNetAllowed=_publicNetAllowed - In the implementation block
@property (assign,nonatomic) int contextType;                              //@synthesize contextType=_contextType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setApnName:(NSString *)arg1 ;
-(NSString *)apnName;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSNumber *)pdp;
-(unsigned)wirelessTechnologyMask;
-(int)ipFamily;
-(BOOL)publicNetAllowed;
-(int)contextType;
-(void)setPdp:(NSNumber *)arg1 ;
-(void)setWirelessTechnologyMask:(unsigned)arg1 ;
-(void)setIpFamily:(int)arg1 ;
-(void)setPublicNetAllowed:(BOOL)arg1 ;
-(void)setContextType:(int)arg1 ;
@end

