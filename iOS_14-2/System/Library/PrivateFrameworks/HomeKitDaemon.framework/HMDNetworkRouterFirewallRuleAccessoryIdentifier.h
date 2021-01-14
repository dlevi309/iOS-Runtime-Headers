/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HMFVersion;

@interface HMDNetworkRouterFirewallRuleAccessoryIdentifier : HMFObject <NSCopying> {

	NSString* _productGroup;
	NSString* _productNumber;
	HMFVersion* _firmwareVersion;

}

@property (nonatomic,readonly) NSString * cloudKitZoneName; 
@property (nonatomic,readonly) NSString * cloudKitRecordName; 
@property (nonatomic,readonly) NSString * productGroup;                    //@synthesize productGroup=_productGroup - In the implementation block
@property (nonatomic,readonly) NSString * productNumber;                   //@synthesize productNumber=_productNumber - In the implementation block
@property (nonatomic,readonly) HMFVersion * firmwareVersion;               //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
+(id)createWithProductData:(id)arg1 firmwareVersion:(id)arg2 ;
+(id)identifierFromRecordID:(id)arg1 ;
-(HMFVersion *)firmwareVersion;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(NSString *)productNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cloudKitRecordID;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ;
-(NSString *)cloudKitZoneName;
-(NSString *)cloudKitRecordName;
-(NSString *)productGroup;
@end

