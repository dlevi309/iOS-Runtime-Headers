/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTMobileEquipmentInfo : NSObject <NSCopying, NSSecureCoding> {

	long long _slotId;
	NSString* _currentMobileId;
	NSString* _currentSubscriberId;
	NSString* _IMEI;
	NSString* _ICCID;
	NSString* _IMSI;
	NSString* _cdmaIMSI;
	NSString* _MEID;
	NSString* _EUIMID;
	NSNumber* _PRLVersion;
	NSNumber* _ERIVersion;
	NSString* _MIN;
	NSString* _NAI;
	NSString* _baseVersion;
	NSString* _baseId;
	NSString* _baseProfile;
	NSString* _effectiveICCID;
	NSString* _CSN;
	NSString* _displayCSN;

}

@property (assign,nonatomic) long long slotId;                            //@synthesize slotId=_slotId - In the implementation block
@property (nonatomic,retain) NSString * currentMobileId;                  //@synthesize currentMobileId=_currentMobileId - In the implementation block
@property (nonatomic,retain) NSString * currentSubscriberId;              //@synthesize currentSubscriberId=_currentSubscriberId - In the implementation block
@property (nonatomic,retain) NSString * IMEI;                             //@synthesize IMEI=_IMEI - In the implementation block
@property (nonatomic,retain) NSString * ICCID;                            //@synthesize ICCID=_ICCID - In the implementation block
@property (nonatomic,retain) NSString * IMSI;                             //@synthesize IMSI=_IMSI - In the implementation block
@property (nonatomic,retain) NSString * cdmaIMSI;                         //@synthesize cdmaIMSI=_cdmaIMSI - In the implementation block
@property (nonatomic,retain) NSString * MEID;                             //@synthesize MEID=_MEID - In the implementation block
@property (nonatomic,retain) NSString * EUIMID;                           //@synthesize EUIMID=_EUIMID - In the implementation block
@property (nonatomic,retain) NSNumber * PRLVersion;                       //@synthesize PRLVersion=_PRLVersion - In the implementation block
@property (nonatomic,retain) NSNumber * ERIVersion;                       //@synthesize ERIVersion=_ERIVersion - In the implementation block
@property (nonatomic,retain) NSString * MIN;                              //@synthesize MIN=_MIN - In the implementation block
@property (nonatomic,retain) NSString * NAI;                              //@synthesize NAI=_NAI - In the implementation block
@property (nonatomic,retain) NSString * baseVersion;                      //@synthesize baseVersion=_baseVersion - In the implementation block
@property (nonatomic,retain) NSString * baseId;                           //@synthesize baseId=_baseId - In the implementation block
@property (nonatomic,retain) NSString * baseProfile;                      //@synthesize baseProfile=_baseProfile - In the implementation block
@property (nonatomic,retain) NSString * effectiveICCID;                   //@synthesize effectiveICCID=_effectiveICCID - In the implementation block
@property (nonatomic,retain) NSString * CSN;                              //@synthesize CSN=_CSN - In the implementation block
@property (nonatomic,retain) NSString * displayCSN;                       //@synthesize displayCSN=_displayCSN - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPRLVersion:(NSNumber *)arg1 ;
-(NSString *)IMSI;
-(NSString *)effectiveICCID;
-(void)setSlotId:(long long)arg1 ;
-(void)setCSN:(NSString *)arg1 ;
-(void)setMEID:(NSString *)arg1 ;
-(NSString *)NAI;
-(NSString *)MIN;
-(NSString *)MEID;
-(void)setNAI:(NSString *)arg1 ;
-(void)setCdmaIMSI:(NSString *)arg1 ;
-(void)setBaseProfile:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)EUIMID;
-(NSString *)ICCID;
-(NSString *)cdmaIMSI;
-(id)description;
-(NSNumber *)ERIVersion;
-(void)setERIVersion:(NSNumber *)arg1 ;
-(void)setIMEI:(NSString *)arg1 ;
-(NSString *)displayCSN;
-(void)setBaseVersion:(NSString *)arg1 ;
-(long long)slotId;
-(NSString *)CSN;
-(NSString *)baseProfile;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)IMEI;
-(void)setEffectiveICCID:(NSString *)arg1 ;
-(void)setICCID:(NSString *)arg1 ;
-(NSString *)currentMobileId;
-(NSString *)currentSubscriberId;
-(NSNumber *)PRLVersion;
-(void)setEUIMID:(NSString *)arg1 ;
-(void)setBaseId:(NSString *)arg1 ;
-(void)setDisplayCSN:(NSString *)arg1 ;
-(NSString *)baseVersion;
-(NSString *)baseId;
-(void)setCurrentSubscriberId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIMSI:(NSString *)arg1 ;
-(void)setCurrentMobileId:(NSString *)arg1 ;
-(void)setMIN:(NSString *)arg1 ;
@end

