/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSData;

@interface CTSMSDataType : NSObject <NSCopying, NSSecureCoding> {

	BOOL _parseSMSC;
	BOOL _waitForAck;
	NSNumber* _transport;
	NSNumber* _ctFormat;
	NSData* _hexPdu;

}

@property (assign,nonatomic) NSNumber * transport;              //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) NSNumber * ctFormat;               //@synthesize ctFormat=_ctFormat - In the implementation block
@property (assign,nonatomic) BOOL parseSMSC;                    //@synthesize parseSMSC=_parseSMSC - In the implementation block
@property (assign,nonatomic) BOOL waitForAck;                   //@synthesize waitForAck=_waitForAck - In the implementation block
@property (nonatomic,retain) NSData * hexPdu;                   //@synthesize hexPdu=_hexPdu - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)hexPdu;
-(NSNumber *)ctFormat;
-(BOOL)parseSMSC;
-(BOOL)waitForAck;
-(void)setHexPdu:(NSData *)arg1 ;
-(void)setParseSMSC:(BOOL)arg1 ;
-(void)setCtFormat:(NSNumber *)arg1 ;
-(void)setWaitForAck:(BOOL)arg1 ;
-(NSNumber *)transport;
-(id)init;
-(BOOL)isEqualToCTSMSDataType:(id)arg1 ;
-(void)setTransport:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

