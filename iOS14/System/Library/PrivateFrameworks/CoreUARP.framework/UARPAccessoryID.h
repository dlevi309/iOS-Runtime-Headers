/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/

#import <CoreUARP/CoreUARP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSUUID;

@interface UARPAccessoryID : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _lastAddedDate;
	NSString* _countryCode;
	NSUUID* _uuid;
	unsigned long long _capability;
	BOOL _downloadOnCellularAllowed;
	BOOL _autoDownloadAllowed;
	NSString* _manufacturer;
	NSString* _modelName;
	NSString* _modelNumber;
	NSString* _serialNumber;
	NSString* _firmwareVersion;
	NSString* _stagedFirmwareVersion;
	NSString* _productGroup;
	NSString* _productNumber;
	long long _transport;

}

@property (readonly) NSString * manufacturer;                       //@synthesize manufacturer=_manufacturer - In the implementation block
@property (readonly) NSString * modelName;                          //@synthesize modelName=_modelName - In the implementation block
@property (readonly) NSString * modelNumber;                        //@synthesize modelNumber=_modelNumber - In the implementation block
@property (readonly) NSString * serialNumber;                       //@synthesize serialNumber=_serialNumber - In the implementation block
@property (readonly) NSString * firmwareVersion;                    //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (readonly) NSString * stagedFirmwareVersion;              //@synthesize stagedFirmwareVersion=_stagedFirmwareVersion - In the implementation block
@property (readonly) NSString * productGroup;                       //@synthesize productGroup=_productGroup - In the implementation block
@property (readonly) NSString * productNumber;                      //@synthesize productNumber=_productNumber - In the implementation block
@property (assign) BOOL downloadOnCellularAllowed;                  //@synthesize downloadOnCellularAllowed=_downloadOnCellularAllowed - In the implementation block
@property (assign) BOOL autoDownloadAllowed;                        //@synthesize autoDownloadAllowed=_autoDownloadAllowed - In the implementation block
@property (assign) long long transport;                             //@synthesize transport=_transport - In the implementation block
@property (readonly) unsigned long long capability; 
+(BOOL)supportsSecureCoding;
-(void)setCountryCode:(id)arg1 ;
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(NSString *)manufacturer;
-(id)uuid;
-(id)countryCode;
-(long long)transport;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setTransport:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)modelName;
-(id)description;
-(void)setModelName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)modelNumber;
-(unsigned long long)capability;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setCapability:(unsigned long long)arg1 ;
-(void)setUuid:(id)arg1 ;
-(void)setProductNumber:(NSString *)arg1 ;
-(NSString *)productNumber;
-(void)setModelNumber:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)productGroup;
-(BOOL)analyticsIsEqual:(id)arg1 ;
-(void)initCountryCode;
-(id)initWithManufacturer:(id)arg1 modelName:(id)arg2 serialNumber:(id)arg3 firmwareVersion:(id)arg4 ;
-(id)lastAddedDate;
-(id)initWithManufacturer:(id)arg1 modelName:(id)arg2 serialNumber:(id)arg3 firmwareVersion:(id)arg4 productGroup:(id)arg5 productNumber:(id)arg6 ;
-(id)initWithModelNumber:(id)arg1 ;
-(void)setLastAddedDate;
-(double)timeSinceLastAdded;
-(void)setProductGroup:(NSString *)arg1 ;
-(void)setStagedFirmwareVersion:(NSString *)arg1 ;
-(BOOL)shareAnalyticsEventsWithThirdParty;
-(NSString *)stagedFirmwareVersion;
-(BOOL)downloadOnCellularAllowed;
-(void)setDownloadOnCellularAllowed:(BOOL)arg1 ;
-(BOOL)autoDownloadAllowed;
-(void)setAutoDownloadAllowed:(BOOL)arg1 ;
@end

