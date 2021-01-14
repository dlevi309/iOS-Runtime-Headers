/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HMFWoBLEInfo, HMFWoWLANInfo;

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding> {

	NSString* _accessoryIdentifier;
	HMFWoBLEInfo* _woBLEInfo;
	HMFWoWLANInfo* _woWLANInfo;

}

@property (nonatomic,retain) HMFWoBLEInfo * woBLEInfo;                      //@synthesize woBLEInfo=_woBLEInfo - In the implementation block
@property (nonatomic,retain) HMFWoWLANInfo * woWLANInfo;                    //@synthesize woWLANInfo=_woWLANInfo - In the implementation block
@property (nonatomic,readonly) NSString * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accessoryIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(HMFWoBLEInfo *)woBLEInfo;
-(HMFWoWLANInfo *)woWLANInfo;
-(id)initWithAccessory:(id)arg1 woBLEInfo:(id)arg2 ;
-(id)initWithAccessory:(id)arg1 woWLANInfo:(id)arg2 ;
-(void)updateWithWoWLANInfo:(id)arg1 ;
-(void)setWoBLEInfo:(HMFWoBLEInfo *)arg1 ;
-(void)setWoWLANInfo:(HMFWoWLANInfo *)arg1 ;
-(void)updateWithWoBLEInfo:(id)arg1 ;
@end

