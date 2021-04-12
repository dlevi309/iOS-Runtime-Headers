/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMFVersion *)firmwareVersion;
-(id)cloudKitRecordID;
-(id)attributeDescriptions;
-(id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ;
-(NSString *)cloudKitZoneName;
-(NSString *)cloudKitRecordName;
-(NSString *)productGroup;
-(NSString *)productNumber;
@end

