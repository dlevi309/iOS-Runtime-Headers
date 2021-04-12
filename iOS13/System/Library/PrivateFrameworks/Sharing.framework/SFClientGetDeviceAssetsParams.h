/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFClientGetDeviceAssetsParams : NSObject <NSSecureCoding> {

	unsigned short _bluetoothProductID;
	unsigned _colorCode;
	NSString* _model;
	double _timeoutSeconds;

}

@property (assign,nonatomic) unsigned short bluetoothProductID;              //@synthesize bluetoothProductID=_bluetoothProductID - In the implementation block
@property (assign,nonatomic) unsigned colorCode;                             //@synthesize colorCode=_colorCode - In the implementation block
@property (nonatomic,copy) NSString * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                          //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(double)timeoutSeconds;
-(void)setTimeoutSeconds:(double)arg1 ;
-(void)setColorCode:(unsigned)arg1 ;
-(unsigned)colorCode;
-(unsigned short)bluetoothProductID;
-(void)setBluetoothProductID:(unsigned short)arg1 ;
@end

