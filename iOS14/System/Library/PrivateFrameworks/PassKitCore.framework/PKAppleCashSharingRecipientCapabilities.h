/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKOSVersionRequirement;

@interface PKAppleCashSharingRecipientCapabilities : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsManatee;
	NSString* _handle;
	NSString* _altDSID;
	NSString* _deviceRegion;
	PKOSVersionRequirement* _fromDeviceVersion;

}

@property (nonatomic,copy) NSString * handle;                                         //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                        //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * deviceRegion;                                   //@synthesize deviceRegion=_deviceRegion - In the implementation block
@property (assign,nonatomic) BOOL supportsManatee;                                    //@synthesize supportsManatee=_supportsManatee - In the implementation block
@property (nonatomic,retain) PKOSVersionRequirement * fromDeviceVersion;              //@synthesize fromDeviceVersion=_fromDeviceVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)appleCashSharingRecipientCapbilitesRequestWithProtobuf:(id)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)deviceRegion;
-(id)description;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setDeviceRegion:(NSString *)arg1 ;
-(id)protobuf;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKOSVersionRequirement *)fromDeviceVersion;
-(void)setFromDeviceVersion:(PKOSVersionRequirement *)arg1 ;
-(void)setSupportsManatee:(BOOL)arg1 ;
-(BOOL)supportsManatee;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

