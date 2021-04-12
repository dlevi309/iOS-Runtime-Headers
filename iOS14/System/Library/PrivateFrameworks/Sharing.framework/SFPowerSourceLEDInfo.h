/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SFPowerSourceLEDInfo : NSObject <NSSecureCoding> {

	int _LEDColor;
	int _LEDState;

}

@property (assign,nonatomic) int LEDColor;              //@synthesize LEDColor=_LEDColor - In the implementation block
@property (assign,nonatomic) int LEDState;              //@synthesize LEDState=_LEDState - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLEDColor:(int)arg1 ;
-(void)setLEDState:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)LEDColor;
-(int)LEDState;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

