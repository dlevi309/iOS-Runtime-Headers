/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPAccessory, NSString, NSNumber;

@interface HMDAccessoryTransportInformation : HMFObject <NSSecureCoding> {

	BOOL _reachable;
	HAPAccessory* _hapAccessory;
	NSString* _serverIdentifier;
	NSString* _protocolVersion;
	NSNumber* _instanceID;
	long long _linkType;

}

@property (nonatomic,retain) HAPAccessory * hapAccessory;              //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (nonatomic,retain) NSString * serverIdentifier;              //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,retain) NSString * protocolVersion;               //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,retain) NSNumber * instanceID;                    //@synthesize instanceID=_instanceID - In the implementation block
@property (assign) long long linkType;                                 //@synthesize linkType=_linkType - In the implementation block
@property (assign) BOOL reachable;                                     //@synthesize reachable=_reachable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)protocolVersion;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(long long)linkType;
-(void)setLinkType:(long long)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(NSString *)serverIdentifier;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(BOOL)reachable;
-(NSNumber *)instanceID;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(HAPAccessory *)hapAccessory;
-(void)setHapAccessory:(HAPAccessory *)arg1 ;
-(id)initWithServerIdentifier:(id)arg1 instanceID:(id)arg2 linkType:(long long)arg3 reachable:(BOOL)arg4 ;
-(id)initWithHAPAccessory:(id)arg1 ;
@end

