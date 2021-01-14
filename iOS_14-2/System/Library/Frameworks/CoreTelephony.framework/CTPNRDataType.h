/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPNRDataType : NSObject <NSCopying, NSSecureCoding> {

	long long _pnrMechanism;
	NSString* _svcCenterAddr;
	NSString* _destAddr;

}

@property (assign,nonatomic) long long pnrMechanism;                //@synthesize pnrMechanism=_pnrMechanism - In the implementation block
@property (nonatomic,retain) NSString * svcCenterAddr;              //@synthesize svcCenterAddr=_svcCenterAddr - In the implementation block
@property (nonatomic,retain) NSString * destAddr;                   //@synthesize destAddr=_destAddr - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)destAddr;
-(long long)pnrMechanism;
-(void)setDestAddr:(NSString *)arg1 ;
-(NSString *)svcCenterAddr;
-(void)setSvcCenterAddr:(NSString *)arg1 ;
-(void)setPnrMechanism:(long long)arg1 ;
-(id)init;
-(BOOL)isEqualToCTPNRDataType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

