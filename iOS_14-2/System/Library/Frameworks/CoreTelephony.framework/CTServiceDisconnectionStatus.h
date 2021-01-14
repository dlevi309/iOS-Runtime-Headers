/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTServiceDisconnectionStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _activationFailure;
	int _contextType;
	int _error;
	NSString* _apnName;
	NSNumber* _connectionMask;
	NSNumber* _rawCauseCode;
	NSNumber* _pdp;

}

@property (assign,nonatomic) int contextType;                        //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,retain) NSString * apnName;                     //@synthesize apnName=_apnName - In the implementation block
@property (assign,nonatomic) BOOL activationFailure;                 //@synthesize activationFailure=_activationFailure - In the implementation block
@property (nonatomic,retain) NSNumber * connectionMask;              //@synthesize connectionMask=_connectionMask - In the implementation block
@property (assign,nonatomic) int error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSNumber * rawCauseCode;                //@synthesize rawCauseCode=_rawCauseCode - In the implementation block
@property (nonatomic,retain) NSNumber * pdp;                         //@synthesize pdp=_pdp - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)contextType;
-(NSNumber *)rawCauseCode;
-(NSNumber *)connectionMask;
-(void)setRawCauseCode:(NSNumber *)arg1 ;
-(void)setContextType:(int)arg1 ;
-(void)setConnectionMask:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)activationFailure;
-(void)setError:(int)arg1 ;
-(int)error;
-(id)description;
-(void)setPdp:(NSNumber *)arg1 ;
-(NSNumber *)pdp;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setApnName:(NSString *)arg1 ;
-(NSString *)apnName;
-(void)setActivationFailure:(BOOL)arg1 ;
@end

