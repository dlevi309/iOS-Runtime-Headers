/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class NSString;

@interface STWifiStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	BOOL _wifiActive;
	unsigned long long _signalStrengthBars;
	BOOL _associatedToIOSHotspot;

}

@property (getter=isWifiActive,nonatomic,readonly) BOOL wifiActive;                                      //@synthesize wifiActive=_wifiActive - In the implementation block
@property (nonatomic,readonly) unsigned long long signalStrengthBars;                                    //@synthesize signalStrengthBars=_signalStrengthBars - In the implementation block
@property (getter=isAssociatedToIOSHotspot,nonatomic,readonly) BOOL associatedToIOSHotspot;              //@synthesize associatedToIOSHotspot=_associatedToIOSHotspot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)signalStrengthBars;
-(id)diffFromData:(id)arg1 ;
-(id)dataByApplyingDiff:(id)arg1 ;
-(BOOL)isWifiActive;
-(BOOL)isAssociatedToIOSHotspot;
-(id)initWithWifiActive:(BOOL)arg1 signalStrengthBars:(unsigned long long)arg2 associatedToIOSHotspot:(BOOL)arg3 ;
@end

