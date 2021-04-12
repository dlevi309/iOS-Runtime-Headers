/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accessoryIdentifier;
-(HMFWoBLEInfo *)woBLEInfo;
-(HMFWoWLANInfo *)woWLANInfo;
-(id)initWithAccessory:(id)arg1 woBLEInfo:(id)arg2 ;
-(id)initWithAccessory:(id)arg1 woWLANInfo:(id)arg2 ;
-(void)updateWithWoWLANInfo:(id)arg1 ;
-(void)setWoBLEInfo:(HMFWoBLEInfo *)arg1 ;
-(void)setWoWLANInfo:(HMFWoWLANInfo *)arg1 ;
-(void)updateWithWoBLEInfo:(id)arg1 ;
@end

