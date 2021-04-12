/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSDictionary;

@interface VCSessionBitrateArbiter : NSObject {

	unsigned _maxBitrate2GUplink;
	unsigned _maxBitrate2GDownlink;
	unsigned _maxBitrate3GUplink;
	unsigned _maxBitrate3GDownlink;
	unsigned _maxBitrateLTEUplink;
	unsigned _maxBitrateLTEDownlink;
	unsigned _maxBitrateWiFiUplink;
	unsigned _maxBitrateWiFiDownlink;
	NSDictionary* _currentSettings;

}

@property (readonly) unsigned maxBitrate2GUplink;                  //@synthesize maxBitrate2GUplink=_maxBitrate2GUplink - In the implementation block
@property (readonly) unsigned maxBitrate3GUplink;                  //@synthesize maxBitrate3GUplink=_maxBitrate3GUplink - In the implementation block
@property (readonly) unsigned maxBitrateLTEUplink;                 //@synthesize maxBitrateLTEUplink=_maxBitrateLTEUplink - In the implementation block
@property (readonly) unsigned maxBitrateWiFiUplink;                //@synthesize maxBitrateWiFiUplink=_maxBitrateWiFiUplink - In the implementation block
@property (readonly) unsigned maxBitrate2GDownlink;                //@synthesize maxBitrate2GDownlink=_maxBitrate2GDownlink - In the implementation block
@property (readonly) unsigned maxBitrate3GDownlink;                //@synthesize maxBitrate3GDownlink=_maxBitrate3GDownlink - In the implementation block
@property (readonly) unsigned maxBitrateLTEDownlink;               //@synthesize maxBitrateLTEDownlink=_maxBitrateLTEDownlink - In the implementation block
@property (readonly) unsigned maxBitrateWiFiDownlink;              //@synthesize maxBitrateWiFiDownlink=_maxBitrateWiFiDownlink - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned)maxBitrateWiFiUplink;
-(unsigned)maxBitrateLTEUplink;
-(void)readHardwareValues;
-(void)readStoreBagValues;
-(BOOL)rangeCheck:(unsigned)arg1 ;
-(unsigned)bitrateForStoreBagKey:(id)arg1 connectionType:(int)arg2 currentBitrate:(unsigned)arg3 ;
-(unsigned)maxBitrate2GUplink;
-(unsigned)maxBitrate3GUplink;
-(unsigned)maxBitrate2GDownlink;
-(unsigned)maxBitrate3GDownlink;
-(unsigned)maxBitrateLTEDownlink;
-(unsigned)maxBitrateWiFiDownlink;
@end

