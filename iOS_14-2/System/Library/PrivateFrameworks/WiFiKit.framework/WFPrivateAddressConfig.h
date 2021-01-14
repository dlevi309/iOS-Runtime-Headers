/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPrivateAddressConfig : NSObject <NSCopying> {

	BOOL _carrierBundleBased;
	unsigned long long _disabledReason;
	NSString* _ssid;

}

@property (assign,nonatomic) unsigned long long disabledReason;                                //@synthesize disabledReason=_disabledReason - In the implementation block
@property (assign,getter=isCarrierBundleBased,nonatomic) BOOL carrierBundleBased;              //@synthesize carrierBundleBased=_carrierBundleBased - In the implementation block
@property (nonatomic,copy) NSString * ssid;                                                    //@synthesize ssid=_ssid - In the implementation block
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)ssid;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)disabledReason;
-(id)initWithPrivateAddressConfigDictionary:(id)arg1 ssid:(id)arg2 ;
-(void)setDisabledReason:(unsigned long long)arg1 ;
-(BOOL)isCarrierBundleBased;
-(void)setCarrierBundleBased:(BOOL)arg1 ;
@end

