/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(BOOL)isEyesFree;
-(BOOL)isTemporaryDevice;
-(id)initWithBluetoothDevice:(id)arg1 ;
@end

