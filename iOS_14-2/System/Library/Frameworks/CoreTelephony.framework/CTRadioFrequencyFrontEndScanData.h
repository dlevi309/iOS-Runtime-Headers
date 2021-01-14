/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface CTRadioFrequencyFrontEndScanData : NSObject <NSCopying, NSSecureCoding> {

	BOOL _rfcInitPass;
	BOOL _rffeScanPass;
	unsigned long long _version;
	unsigned long long _hwPrdId;
	unsigned long long _hwSku;
	unsigned long long _hwRev;
	unsigned long long _hwHousing;
	unsigned long long _rfcHwid;
	unsigned long long _rfcRev;
	unsigned long long _rfcMmwHwid;
	unsigned long long _rfcMmwRev;
	unsigned long long _numExpectedDevices;
	unsigned long long _numDetectedDevices;
	unsigned long long _numMissingDevices;
	NSMutableArray* _rffeScanInfo;

}

@property (assign,nonatomic) unsigned long long version;                         //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long hwPrdId;                         //@synthesize hwPrdId=_hwPrdId - In the implementation block
@property (assign,nonatomic) unsigned long long hwSku;                           //@synthesize hwSku=_hwSku - In the implementation block
@property (assign,nonatomic) unsigned long long hwRev;                           //@synthesize hwRev=_hwRev - In the implementation block
@property (assign,nonatomic) unsigned long long hwHousing;                       //@synthesize hwHousing=_hwHousing - In the implementation block
@property (assign,nonatomic) BOOL rfcInitPass;                                   //@synthesize rfcInitPass=_rfcInitPass - In the implementation block
@property (assign,nonatomic) unsigned long long rfcHwid;                         //@synthesize rfcHwid=_rfcHwid - In the implementation block
@property (assign,nonatomic) unsigned long long rfcRev;                          //@synthesize rfcRev=_rfcRev - In the implementation block
@property (assign,nonatomic) unsigned long long rfcMmwHwid;                      //@synthesize rfcMmwHwid=_rfcMmwHwid - In the implementation block
@property (assign,nonatomic) unsigned long long rfcMmwRev;                       //@synthesize rfcMmwRev=_rfcMmwRev - In the implementation block
@property (assign,nonatomic) BOOL rffeScanPass;                                  //@synthesize rffeScanPass=_rffeScanPass - In the implementation block
@property (assign,nonatomic) unsigned long long numExpectedDevices;              //@synthesize numExpectedDevices=_numExpectedDevices - In the implementation block
@property (assign,nonatomic) unsigned long long numDetectedDevices;              //@synthesize numDetectedDevices=_numDetectedDevices - In the implementation block
@property (assign,nonatomic) unsigned long long numMissingDevices;               //@synthesize numMissingDevices=_numMissingDevices - In the implementation block
@property (nonatomic,retain) NSMutableArray * rffeScanInfo;                      //@synthesize rffeScanInfo=_rffeScanInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hwSku;
-(unsigned long long)hwRev;
-(unsigned long long)hwPrdId;
-(unsigned long long)rfcHwid;
-(unsigned long long)rfcRev;
-(unsigned long long)hwHousing;
-(unsigned long long)rfcMmwRev;
-(void)setHwSku:(unsigned long long)arg1 ;
-(void)setHwRev:(unsigned long long)arg1 ;
-(unsigned long long)rfcMmwHwid;
-(BOOL)rfcInitPass;
-(void)setRfcRev:(unsigned long long)arg1 ;
-(void)setHwPrdId:(unsigned long long)arg1 ;
-(void)setRfcHwid:(unsigned long long)arg1 ;
-(void)setHwHousing:(unsigned long long)arg1 ;
-(void)setRfcMmwRev:(unsigned long long)arg1 ;
-(BOOL)rffeScanPass;
-(NSMutableArray *)rffeScanInfo;
-(void)setNumMissingDevices:(unsigned long long)arg1 ;
-(void)setRfcInitPass:(BOOL)arg1 ;
-(void)setRfcMmwHwid:(unsigned long long)arg1 ;
-(unsigned long long)numMissingDevices;
-(void)setRffeScanPass:(BOOL)arg1 ;
-(void)setRffeScanInfo:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setNumExpectedDevices:(unsigned long long)arg1 ;
-(void)setNumDetectedDevices:(unsigned long long)arg1 ;
-(unsigned long long)numExpectedDevices;
-(unsigned long long)numDetectedDevices;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

