/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICQOffer, NSData;

@interface ICQRemoteContext : NSObject <NSSecureCoding> {

	ICQOffer* _offer;
	NSData* _flowOptionsData;

}

@property (nonatomic,readonly) ICQOffer * offer;                      //@synthesize offer=_offer - In the implementation block
@property (nonatomic,readonly) NSData * flowOptionsData;              //@synthesize flowOptionsData=_flowOptionsData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ICQContextFromRemoteAlertContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_serializedData;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(ICQOffer *)offer;
-(id)initWithOffer:(id)arg1 flowOptionsData:(id)arg2 ;
-(NSData *)flowOptionsData;
@end

