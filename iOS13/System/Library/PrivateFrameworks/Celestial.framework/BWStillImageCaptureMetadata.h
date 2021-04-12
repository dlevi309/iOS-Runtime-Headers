/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface BWStillImageCaptureMetadata : NSObject <NSSecureCoding> {

	int _snrType;
	float _snr;
	int _deviceType;
	NSArray* _slaveFocalLengths;
	NSArray* _slaveLensFNumbers;
	float _totalZoomFactor;

}

@property (assign,nonatomic) int snrType;                              //@synthesize snrType=_snrType - In the implementation block
@property (assign,nonatomic) float snr;                                //@synthesize snr=_snr - In the implementation block
@property (assign,nonatomic) int deviceType;                           //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSArray * slaveFocalLengths;              //@synthesize slaveFocalLengths=_slaveFocalLengths - In the implementation block
@property (nonatomic,retain) NSArray * slaveLensFNumbers;              //@synthesize slaveLensFNumbers=_slaveLensFNumbers - In the implementation block
@property (assign,nonatomic) float totalZoomFactor;                    //@synthesize totalZoomFactor=_totalZoomFactor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)deviceType;
-(float)snr;
-(void)setSnr:(float)arg1 ;
-(void)setDeviceType:(int)arg1 ;
-(int)snrType;
-(NSArray *)slaveLensFNumbers;
-(NSArray *)slaveFocalLengths;
-(float)totalZoomFactor;
-(void)setSnrType:(int)arg1 ;
-(void)setSlaveFocalLengths:(NSArray *)arg1 ;
-(void)setSlaveLensFNumbers:(NSArray *)arg1 ;
-(void)setTotalZoomFactor:(float)arg1 ;
@end

