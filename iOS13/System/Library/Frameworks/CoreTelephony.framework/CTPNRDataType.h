/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)pnrMechanism;
-(NSString *)svcCenterAddr;
-(NSString *)destAddr;
-(BOOL)isEqualToCTPNRDataType:(id)arg1 ;
-(void)setPnrMechanism:(long long)arg1 ;
-(void)setSvcCenterAddr:(NSString *)arg1 ;
-(void)setDestAddr:(NSString *)arg1 ;
@end

