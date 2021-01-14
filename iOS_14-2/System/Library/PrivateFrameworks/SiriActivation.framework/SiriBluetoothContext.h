/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriContext.h>

@class NSNumber, NSString;

@interface SiriBluetoothContext : SiriContext {

	NSNumber* _isTemporaryDevice;
	NSNumber* _isEyesFree;
	NSString* _address;

}

@property (nonatomic,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEyesFree;
-(id)description;
-(NSString *)address;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTemporaryDevice;
-(id)initWithBluetoothDevice:(id)arg1 ;
@end

