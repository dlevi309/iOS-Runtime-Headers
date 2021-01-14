/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSSet;

@interface CWFScanParameters : NSObject <NSCopying, NSSecureCoding> {

	BOOL _mergeScanResults;
	BOOL _includeHiddenNetworks;
	int _BSSType;
	int _PHYMode;
	int _scanType;
	int _scanFlags;
	NSArray* _channels;
	NSString* _SSID;
	NSArray* _SSIDList;
	unsigned long long _numberOfScans;
	unsigned long long _restTime;
	unsigned long long _dwellTime;
	unsigned long long _maximumCacheAge;
	long long _minimumRSSI;
	NSSet* _includeProperties;
	NSArray* _includeScanResults;

}

@property (nonatomic,copy) NSArray * channels;                                //@synthesize channels=_channels - In the implementation block
@property (setter=SID,nonatomic,copy) NSString * SSID;                        //@synthesize SSID=_SSID - In the implementation block
@property (setter=SIDList,nonatomic,copy) NSArray * SSIDList;                 //@synthesize SSIDList=_SSIDList - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfScans;                //@synthesize numberOfScans=_numberOfScans - In the implementation block
@property (assign,nonatomic) unsigned long long restTime;                     //@synthesize restTime=_restTime - In the implementation block
@property (assign,nonatomic) unsigned long long dwellTime;                    //@synthesize dwellTime=_dwellTime - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCacheAge;              //@synthesize maximumCacheAge=_maximumCacheAge - In the implementation block
@property (assign,nonatomic) int BSSType;                                     //@synthesize BSSType=_BSSType - In the implementation block
@property (assign,nonatomic) int PHYMode;                                     //@synthesize PHYMode=_PHYMode - In the implementation block
@property (assign,nonatomic) int scanType;                                    //@synthesize scanType=_scanType - In the implementation block
@property (assign,nonatomic) long long minimumRSSI;                           //@synthesize minimumRSSI=_minimumRSSI - In the implementation block
@property (assign,nonatomic) BOOL mergeScanResults;                           //@synthesize mergeScanResults=_mergeScanResults - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenNetworks;                      //@synthesize includeHiddenNetworks=_includeHiddenNetworks - In the implementation block
@property (assign,nonatomic) int scanFlags;                                   //@synthesize scanFlags=_scanFlags - In the implementation block
@property (nonatomic,copy) NSSet * includeProperties;                         //@synthesize includeProperties=_includeProperties - In the implementation block
@property (nonatomic,copy) NSArray * includeScanResults;                      //@synthesize includeScanResults=_includeScanResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)SSID;
-(void)setSSID:(NSString *)arg1 ;
-(int)PHYMode;
-(unsigned long long)maximumCacheAge;
-(void)setIncludeProperties:(NSSet *)arg1 ;
-(int)BSSType;
-(void)setDwellTime:(unsigned long long)arg1 ;
-(unsigned long long)numberOfScans;
-(unsigned long long)restTime;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)includeHiddenNetworks;
-(void)setNumberOfScans:(unsigned long long)arg1 ;
-(void)setBSSType:(int)arg1 ;
-(void)setScanFlags:(int)arg1 ;
-(NSArray *)SSIDList;
-(int)scanType;
-(void)setMinimumRSSI:(long long)arg1 ;
-(BOOL)isEqualToScanParameters:(id)arg1 ;
-(void)setChannels:(NSArray *)arg1 ;
-(void)setRestTime:(unsigned long long)arg1 ;
-(NSSet *)includeProperties;
-(unsigned long long)dwellTime;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setMaximumCacheAge:(unsigned long long)arg1 ;
-(void)setIncludeHiddenNetworks:(BOOL)arg1 ;
-(void)setIncludeScanResults:(NSArray *)arg1 ;
-(void)setScanType:(int)arg1 ;
-(NSArray *)includeScanResults;
-(void)setPHYMode:(int)arg1 ;
-(void)setMergeScanResults:(BOOL)arg1 ;
-(long long)minimumRSSI;
-(int)scanFlags;
-(void)setSSIDList:(NSArray *)arg1 ;
-(NSArray *)channels;
-(BOOL)mergeScanResults;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

