/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)_serializedData;
-(id)toDictionary;
-(ICQOffer *)offer;
-(id)initWithOffer:(id)arg1 flowOptionsData:(id)arg2 ;
-(NSData *)flowOptionsData;
@end

